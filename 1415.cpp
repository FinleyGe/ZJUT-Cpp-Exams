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
  int n;
  while (cin >> n) {
    set<int> nums;
    int a;
    for (int i = 0; i < n; i++) {
      cin >> a;
      nums.insert(a);
    }
    int num;
    cin >> num;
    if (binary_search(nums.begin(), nums.end(), num)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}