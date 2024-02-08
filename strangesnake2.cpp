/*
Странная змейка
Выводит змейку размером n на m такого формата:
1       2       3       4
14      15      16      5
13      20      17      6
12      19      18      7
11      10      9       8
*/

#include <iostream>
#include <iomanip>

using namespace std;

void printArray(int (&arr)[100][100], int M, int N)
{
    for (int i = 1; i < N - 1; i++)
    {
        for (int j = 1; j < M - 1; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int N, M;
    cin >> M >> N;
    N = N + 2;
    M = M + 2;
    int A[100][100];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (i > 0 && i < N - 1 && j > 0 && j < M - 1)
                A[i][j] = 0;
            else
                A[i][j] = -1;
        }
    }

    int point[2] = {1, 1};
    bool right = true, down = false, left = false, up = false;
    for (int i = 1; i < (M - 2) * (N - 2) + 1; i++)
    {
        A[point[0]][point[1]] = i;

        if (A[point[0]][point[1] + 1] != 0 && down == false && left == false && up == false)
        {
            right = false;
            down = true;
        }
        else if (A[point[0] + 1][point[1]] != 0 && right == false && left == false && up == false)
        {
            down = false;
            left = true;
        }
        else if (A[point[0]][point[1] - 1] != 0 && down == false && right == false && up == false)
        {
            left = false;
            up = true;
        }
        else if (A[point[0] - 1][point[1]] != 0 && down == false && left == false && right == false)
        {
            up = false;
            right = true;
        }

        if (right)
            point[1]++;
        else if (down)
            point[0]++;
        else if (left)
            point[1]--;
        else
            point[0]--;
    }
    printArray(A, M, N);
}