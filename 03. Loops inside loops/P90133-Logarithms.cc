#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int a,b;
    while (cin >> a >> b) {
        int i = 0;
        int exp = 1;
        while (exp < b) {
            exp = exp*a;
            i = i+1;
        }
        if (exp == b) cout << i << endl;
        else cout << i-1 << endl;
    }
}
