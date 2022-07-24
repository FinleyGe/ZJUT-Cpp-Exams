#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int main() {
  int n;
  while (cin >> n) {
    vector<int> v;
    for (int i = 1; i <= n; i++) {
      v.push_back(i);
    }
    do {
      for (int i = 0; i < v.size() - 1; i++) {
        cout << v[i] << ' ';
      }
      cout << v[v.size() - 1] << endl;
    } while (next_permutation(v.begin(), v.end()));
  }
  return 0;
}