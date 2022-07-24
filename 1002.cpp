#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int main() {
  int n;
  while (cin >> n) {
    vector<int> v1(n), v2(n);
    for (int i = 0; i < n; i++) {
      cin >> v1[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> v2[i];
    }
    sort(v1.begin(), v1.end(), std::less<int>());
    sort(v2.begin(), v2.end(), [](int a, int b) { return a > b; });
    int res = 0;
    for (int i = 0; i < n; i++) {
      res += v1[i] * v2[i];
    }
    cout << res << endl;
  }
  return 0;
}