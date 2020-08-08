#include <iostream>
using namespace std;


int gcd(int a, int b) {
    int aux = b;
    if (a < b) {
        b = a;
        a = aux;
    }	
    if (b == 0) return a;
    int r = a%b;
    if (r == 0) return b;
    return gcd(b, r);
}
int main() {
    int x, y;
    while (cin >> x >> y) {
        cout << gcd(x, y) << endl;
    }
}
