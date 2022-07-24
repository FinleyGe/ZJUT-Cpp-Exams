#include <algorithm>
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
  int num;

  while (cin >> num) {
    vector<int> ans;
    while (true) {
      int r = num % 2;
      num /= 2;
      ans.push_back(r);
      if (num == 0) {
        break;
      }
    }
    reverse(ans.begin(), ans.end());
    for (auto &&i : ans) {
      cout << i;
    }
    cout << endl;
  }
}