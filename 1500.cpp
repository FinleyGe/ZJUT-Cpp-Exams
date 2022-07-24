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
ll catalan(int n) {
  if (n == 0 || n == 1)
    return 1;
  return ((4 * n - 2) * catalan(n - 1)) / (n + 1);
}
signed main() {
  // for (int i = 0; i < 33; i++) {
  //   cout << catalan(i) << endl;
  // }
  while (true) {
    int n;
    cin >> n;
    if (n == 0)
      break;
    cout << n << ": " << catalan(n) << endl;
  }
  return 0;
}