#include <algorithm>
#include <iostream>
#include <map>
#include <string>

using namespace std;
int main() {
  int n;
  while (cin >> n) {
    map<string, int> m;
    string s;
    for (int i = 0; i < n; i++) {
      cin >> s;
      if (m.find(s) == m.end()) {
        m.insert(pair<string, int>(s, 1));
      } else {
        m[s]++;
      }
    }
    for (auto &&i : m) {
      if (i.second == 1) {
        cout << i.first << endl;
        break;
      }
    }
  }
  return 0;
}