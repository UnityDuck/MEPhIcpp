#include <iostream> 
 
using namespace std; 

int main() { 
    int n; 
 
    cin >> n; 
 
    int node[n][n]; 
 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) { 
            cin >> node[i][j]; 
        } 
    } 
 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) { 
            if (node[i][j] == 1) { 
                cout << i << " " << j << endl; 
            } 
        } 
    } 
}