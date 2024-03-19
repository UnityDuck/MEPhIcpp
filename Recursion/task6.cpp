#include <iostream>

using namespace std;

int count_midl_up = 0;
int count_midl_down = 0;

int a;
int b;
int end_num;
int yes_num;
int no_num;

void f_midl_up (int n) {
    if (n == no_num) {
        return;
    } else if (n == end_num) {
        count_midl_up++;
        return;
    } else if (n > end_num) {
        return;
    }
    f_midl_up(n + a);
    f_midl_up(n * b);
}

void f_midl_down (int n) {
    if (n == no_num) {
        return;
    } else if (n == yes_num) {
        count_midl_down++;
        return;
    } else if (n > yes_num) {
        return;
    }
    f_midl_down(n + a);
    f_midl_down(n * b);
}

int main() {
    int n;
    int count = 0;
    cin >> n >> end_num >> a >> b >> yes_num >> no_num;
    f_midl_down(n);
    f_midl_up(yes_num);
    count = count_midl_down * count_midl_up;
    cout << count;

}