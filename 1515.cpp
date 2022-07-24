#include <iostream>
#include <vector>

using namespace std;
int main() {
  while (true) {
    int n;
    cin >> n;
    if (n == 0)
      break;
    vector<int> v(n + 1, 0);
    for (int i = 0; i < n - 1; i++) {
      int a, b;
      cin >> a >> b;
      v[a]++;
      v[b]++;
    }
    int count = 0;
    for (int i = 1; i <= n; i++) {
      if (v[i] == 1)
        count++;
    }
    cout << count << endl;
  }
  return 0;
}
