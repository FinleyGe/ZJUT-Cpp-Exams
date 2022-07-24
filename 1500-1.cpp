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

ll catalan[40] = {0};
signed main() {
  catalan[0] = 1;
  catalan[1] = 1;
  for (int i = 2; i <= 33; i++) {
    catalan[i] = ((4 * i - 2) * catalan[i - 1]) / (i + 1);
  }
  while (true) {
    int num;
    cin >> num;
    if (num == 0)
      break;
    cout << num << ": " << catalan[num] << endl;
  }
  return 0;
}