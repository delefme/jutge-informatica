#include <iostream>
using namespace std;

int double_factorial(int x) {
    int i = x;
    int j = 1;
    while (i > 0) {
        j = j*i;
        i = i-2;
    }
    return j;
}

int main() {
    int n;
    cin >> n;
    cout << double_factorial(n) << endl;
}
