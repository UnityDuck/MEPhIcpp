#include <iostream>

using namespace std;

long long rec(long long a, long long n) {
    if (n == 2) {
        return a * a;
    }
    else if (n == 1) {
        return a;
    }
    else if (n % 2 == 0) {
        return a * a * rec(a, n / 2);
    }
    else if (n % 2 == 1) {
        return a * rec(a, n - 1);
    }
}

int main() {
    long long a, n;
    cin >> a >> n;
    cout << rec(a, n);
}
