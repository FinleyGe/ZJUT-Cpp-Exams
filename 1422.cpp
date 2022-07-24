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
  int n;
  while (cin >> n) {
    ll sum = 0;
    for (int i = 0; i < n; i++) {
      int num;
      cin >> num;
      sum += num;
    }
    double avg = (sum * 1.0) / (n * 1.0);
    int res = int(avg + 0.5);
    cout << res << endl;
  }
  return 0;
}