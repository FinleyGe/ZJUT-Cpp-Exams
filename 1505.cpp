#include <cstring>
#include <iostream>
#include <queue>
using namespace std;
int p[30][30] = {0};
const int DX[] = {-1, 0, 0, 1};
const int DY[] = {0, 1, -1, 0};
int main() {
  int w, h;
  while (true) {
    int startX, startY;
    memset(p, 0, sizeof(p));
    cin >> w >> h;
    if (w == 0 || h == 0)
      break;
    for (int i = 0; i < h; i++) {
      string s;
      cin >> s;
      for (int j = 0; j < w; j++) {
        if (s[j] == '#')
          p[j][i] = 1;
        else if (s[j] == '@') {
          startX = j;
          startY = i;
        }
      }
    }
    // for (int i = 0; i < h; i++) {
    //   for (int j = 0; j < w; j++) {
    //     cout << p[j][i];
    //   }
    //   cout << endl;
    // }
    // cout << "startX" << startX << "startY" << startY << endl;
    queue<pair<int, int>> q;
    q.push(make_pair(startX, startY));
    p[startX][startY] = 2;
    int count = 1;
    while (!q.empty()) {
      int x = q.front().first;
      int y = q.front().second;
      q.pop();
      for (int d = 0; d < 4; d++) {
        int dx = x + DX[d];
        int dy = y + DY[d];
        if (dx < 0 || dx >= w || dy < 0 || dy >= h)
          continue;
        if (p[dx][dy] == 0) {
          count++;
          p[dx][dy] = 2;
          q.push(make_pair(dx, dy));
        }
      }
    }
    cout << count << endl;
  }
  return 0;
}