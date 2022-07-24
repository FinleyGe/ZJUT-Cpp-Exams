#include <bits/stdc++.h>
//#define int long long
#define mp make_pair
#define x first
#define y second
#define all(a) (a).begin()(a).end()
#define rall(a) (a).rbegin()(a).rend()

typedef long long ll;
typedef long double ld;

using namespace std;

const ll INF = 1e9;
const ll M = 1e9;
signed main() {
  int n, m;
  while (cin >> n >> m) {
    vector<int> v(n);
    for (int i = 0; i < m; i++) {
      int a, b;
      cin >> a >> b;
      v[a]++;
      v[b]++;
    }
    int count = 0;
    for (auto &&i : v) {
      if (i % 2 != 0) {
        count++;
      }
    }
    if (count == 0 || count == 2) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}

// 欧拉回路：连通无向图存在欧拉回路的条件是奇顶点（连接的边数为奇数）的个数为0或2