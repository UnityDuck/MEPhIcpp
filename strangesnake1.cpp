/*
Странная змейка1
Выводит змейку размером n на m такого формата:
1       2       4       7       11
3       5       8       12      15
6       9       13      16      18
10      14      17      19      20
*/


#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  n = n + 2;
  m = m + 2;
  int arr[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (i > 0 && i < n - 1 && j > 0 && j < m - 1) {
        arr[i][j] = 0;
      }
      else {
        arr[i][j] = -1;
      }
    }
  }
  int point1[2] = {1, 1};
  int point2[2] = {1, 1};
  for (int i = 0; i < (m - 2) * (n - 2); i++) {
    arr[point1[0]][point1[1]] = i + 1;
    if (arr[point1[0] + 1][point1[1] - 1] != -1) {
      point1[0]++;
      point1[1]--;
    }
    else {
      if (arr[1][point2[1] + 1] != -1) {
        point2[1]++;
      }
      else {
        point2[0]++;
      }
      point1[0] = point2[0];
      point1[1] = point2[1];
    }
  }
  for (int i = 1; i < n - 1; i++) {
    for (int j = 1; j < m - 1; j++) {
      cout << arr[i][j] << "\t";
    }
    cout << endl;
  }
}
