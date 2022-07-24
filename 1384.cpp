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
ll power2(int n) {
  ll ans = 1;
  for (int i = 0; i < n; i++) {
    ans *= 2;
  }
  return ans;
}
signed main() {
  vector<ll> v;
  for (int i = 0; i < 11; i++)
    v.push_back(power2(i));
  int t;
  cin >> t;
  while (t--) {
    int num;
    cin >> num;
    bool flag = false;
    for (int i = 0; i < v.size(); i++) {
      if (num == v[i]) {
        flag = true;
        break;
      }
    }
    if (flag) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}