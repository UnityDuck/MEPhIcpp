#include <iostream>

using namespace std;

int count = 0;
int a;
int b;
int c;
int end_num;
int min_step = INT16_MAX;

void f (int n, int current_step) {
    current_step++;

    if (n == end_num) {
        if (min_step == current_step) {
            count++;
        } else if (min_step > current_step) {
            count = 1;
            min_step = current_step;
        }
        return;
    } else if (n > end_num) {
        return;
    }
    f(n + a, current_step);
    f(n + b, current_step);
    f(n * c, current_step);
}

int main() {
    int n;
    cin >> n >> end_num >> a >> b >> c;
    f(n, 0);
    cout << count;

}