#include <iostream>

using namespace std;

long long sum(int n, int m) {
    if (m > 0) {
        return sum(n + 1, m - 1);
    }
    else if (m < 0) {
        return sum(n - 1, m + 1);
    }
    else {
      return n;
    }
}

int main() {
    cout << sum(-1, 10);
    return 0;
}