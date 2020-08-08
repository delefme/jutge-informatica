#include <iostream>
using namespace std;

int proddig(int n) {
    if (n == 0) return 0;
    else {
        int prod = 1;
        while (n != 0) {
                prod = prod*(n%10);
                n = n/10;
            }
            return prod;
    }
}
int main() {
    int n;
    while (cin >> n) {
        int y = n;
        cout << "The product of the digits of " << y << " is " << proddig(n) << "." << endl;
        while (proddig(n)/10 != 0) {
            n = proddig(n);
            cout << "The product of the digits of " << n << " is " << proddig(n) << "." << endl;
        }
        cout << "----------" << endl;
    }
}
