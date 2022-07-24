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
  double n, a, m;
  while (cin >> n >> a >> m) {
    while (m--) {
      n += n * a * 0.01;
    }
    cout << int(n + 0.5) << endl;
  }
  return 0;
}