#include <iostream>

using namespace std;

int count = 0;
int a;
int b;
int end_num;

void f (int n) {
    if (n == end_num) {
        count++;
        return;
    } else if (n > end_num) {
        return;
    }
    f(n + a);
    f(n * b);
}

int main() {
    int n;
    cin >> n >> end_num >> a >> b;
    f(n);
    cout << count;
}