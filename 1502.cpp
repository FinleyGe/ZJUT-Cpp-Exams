#include <iostream>
#include <map>
#include <set>

using namespace std;
typedef long long ll;
const ll INF = 0x3f3f3f3f;
int main() {
  int n;
  while (cin >> n) {
    int x, y;
    map<int, pair<int, int>> m;
    int maxY = 0;
    int minY = 0;
    for (int i = 0; i < n; i++) {
      cin >> x >> y;
      maxY = max(maxY, y);
      minY = min(minY, y);
      if (m.find(x) == m.end()) {
        auto p = pair<int, int>(y, y);
        m.insert(pair<int, pair<int, int>>(x, p));
      } else {
        m[x].first = min(m[x].first, y);
        m[x].second = max(m[x].second, y);
      }
    }
    ll ans = INF;
    for (int y = minY; y <= maxY; y++) {
      ll res = 0;
      for (auto &&i : m) {
        int max = i.second.second;
        int min = i.second.first;
        if (y > max)
          res += abs(y - min);
        else if (min <= y && y <= max) {
          res += abs(y - min) + abs(y - max);
        } else if (y < min) {
          res += abs(max - y);
        }
      }
      ans = min(ans, res);
    }
    cout << ans << endl;
  }
  return 0;
}