#include <iostream> 
 
using namespace std; 

int main() { 
    int n; 
    int m; 
     
    cin >> n >> m; 
 
    int node[n][n]; 
 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) { 
            node[i][j] = 0; 
        } 
    } 
 
    int values[n]; 
 
    for (int i = 0; i < n; i++) { 
        cin >> values[i]; 
    } 
 
    int q; 
    int e; 
 
    for (int i = 0; i < m; i++) { 
        cin >> q >> e; 
        node[q][e] = 1; 
        node[e][q] = 1; 
    } 
 
    for (int i = 0; i < n; i++) { 
        int result = 0; 
        for (int j = 0; j < n; j++) { 
            if (node[i][j] == 1) { 
                result += values[j]; 
            } 
        } 
        cout << result << " "; 
    } 
 
}
