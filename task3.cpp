#include <iostream>

using namespace std;

void rec(int n) {
    int m = 0;
    cin >> m;
    if (n > 1) {
        rec(n - 1);
    }
    if (m % 2 == 0) cout << m << " ";
}

int main() {
    int n;
    cin >> n;
    rec(n);
}
