#include <iostream>

using namespace std;

int rec(long long n, int &summa) {
    if (n == 0) {
        return summa;
    }
    else {
        if (n % 10 > summa) {
            summa = n % 10;
        }
        return rec(n / 10, summa);
    }
}

int main() {
    long long n; int summa = 0;
    cin >> n;
    cout << rec(n, summa);
    return 0;
}
