#include <iostream>
using namespace std;

int sum_of_digits(int x){
    if (x == 0) return 0;
    return (sum_of_digits(x/10) + x%10);
}
int reduction_of_digits(int n) {
    if (n/10 == 0) return n;
    return reduction_of_digits(sum_of_digits(n));
}

bool is_multiple_3(int n) {
    int k = reduction_of_digits(n);
    if (k == 0 or k == 3 or k == 6 or k == 9) return true;
    return false;
}
