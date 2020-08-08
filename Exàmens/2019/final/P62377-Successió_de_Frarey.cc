#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int num1 = 0;
        int den1 = 1;
        int num2 = 1;
        int den2 = n;
        cout << 0 << '/' << 1 << ' ' << 1 << '/' << n;
        int nextnum, nextden;
        while (num2*den2 != 1) {     //s'acabara quan tant num2 com den2 siguin 1
            int x = (n+den1)/den2;
            nextnum = x*num2 - num1;
            nextden = x*den2 - den1;
            cout << ' ' << nextnum << '/' << nextden;
            num1 = num2;
            den1 = den2;
            num2 = nextnum;
            den2 = nextden;
        }
        cout << endl;
    }
}
