#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  while (cin >> n) {
    vector<int> v;
    int a;
    while (n--) {
      cin >> a;
      v.push_back(a);
    }
    int m;
    cin >> m;
    while (m--) {
      cin >> a;
      v.push_back(a);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size() - 1; i++) {
      cout << v[i] << ' ';
    }
    cout << v[v.size() - 1] << endl << endl;
  }
}