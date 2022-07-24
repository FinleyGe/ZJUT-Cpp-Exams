#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b) {
  if (a.second > b.second)
    return true;
  else if (a.second == b.second) {
    if (a.first < b.first) {
      return true;
    } else {
      return false;
    }
  }
  return false;
}
int main() {
  int n;
  while (true) {
    cin >> n;
    if (n == 0)
      break;
    map<int, int> m;
    for (int i = 0; i < n - 1; i++) {
      int a, b;
      cin >> a >> b;
      if (m.find(a) == m.end()) {
        // cout << "here";
        m.insert(make_pair(a, 1));
      } else {
        m[a]++;
      }
      if (m.find(b) == m.end()) {
        m.insert(make_pair(b, 1));
        // cout << " here";
      } else {
        m[b]++;
      }
    }
    // for (auto &&i : m) {
    //   cout << i.first << " " << i.second << endl;
    // }
    vector<pair<int, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), cmp);
    // for (auto &&i : v) {
    //   cout << i.first << i.second << endl;
    // }
    cout << v[0].first << endl;
  }
  return 0;
}