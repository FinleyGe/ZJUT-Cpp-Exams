#include <iostream>
#include <string>
using namespace std;

bool p(string s, int l, int r) {
  while (l < r) {
    if (s[l] != s[r])
      return false;
    l++;
    r--;
    if (l == r)
      return true;
  }
  return true;
}

int main() {
  string s;
  while (cin >> s) {
    int l = 0;
    int len = s.length();
    for (; len > 1; len--) {
      bool flag = false;
      for (int i = 0; i + len - 1 < s.length(); i++) {
        if (p(s, i, len - 1 + i)) {
          flag = true;
          break;
        }
      }
      if (flag) {
        break;
      }
    }
    cout << len << endl;
  }
}