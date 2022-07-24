#include <iostream>
#include <string>
using namespace std;
string num[10] = {"zero", "one", "two",   "three", "four",
                  "five", "six", "seven", "eight", "nine"};
void toLower(string &s) {
  for (int i = 0; i < s.length(); i++) {
    s[i] = tolower(s[i]);
  }
}
int toNum(string s) {
  toLower(s);
  for (int i = 0; i < 10; i++) {
    if (s == num[i])
      return i;
  }
  return -1;
}
int main() {
  string n1, n4, n2, c1, n3;
  while (cin >> n1 >> n4 >> n2 >> c1 >> n3) {
    int a, b, c;
    a = toNum(n1);
    b = toNum(n2);
    c = toNum(n3);
    toLower(n4);
    if (n4 == "div" && b == 0) {
      cout << "false" << endl;
      continue;
    }
    if (n4 == "add" && a + b == c)
      cout << "true" << endl;
    else if (n4 == "sub" && a - b == c) {
      cout << "true" << endl;
    } else if (n4 == "div" && a / b == c) {
      cout << "true" << endl;
    } else if (n4 == "mul" && a * b == c) {
      cout << "true" << endl;
    } else {
      cout << "false" << endl;
    }
  }
}