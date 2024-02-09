#include <iostream> 
 
using namespace std; 

int main() { 
    int n; 
    int m; 
 
    cin >> n >> m; 
 
    int node[n][n]; 
 
    int q; 
    int e; 
 
    for (int i = 0; i < m; i++) { 
        cin >> q >> e; 
        node[q][e] = 1; 
        node[e][q] = 1; 
    } 
 
    int f; 
    int h; 
 
    cin >> f >> h; 
 
    for (int i = 0; i < n; i++) { 
        if (node[f][i] == 1 && node[h][i] == 1) { 
            cout << "YES"; 
            return 0; 
        } 
    } 
    cout << "NO"; 
}