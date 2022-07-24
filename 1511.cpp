#include <algorithm>
#include <iostream>

using namespace std;
typedef long long ll;
int main() {
  int n;
  while (cin >> n) {
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
      ans += (i * i) % 100009;
    }
    cout << ans % 100009 << endl;
  }
  return 0;
}