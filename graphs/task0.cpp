#include <iostream> 
 
using namespace std; 
 
int main() { 
    int n; 
    int m; 
 
    cin >> n >> m; 
 
    int node[n]{0}; 
 
    int q; 
    int e; 
 
    for (int i = 0; i < m; i++) { 
        cin >> q >> e; 
 
        node[q]++; 
        node[e]++; 
    } 
 
    for (int i = 0; i < n; i++) { 
        cout << node[i] << " "; 
    } 
 
}