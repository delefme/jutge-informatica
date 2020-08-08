#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    double a, b, k;
    while (cin >> a >> b >> k) {
        double i = 0;
        double suma = 0;
        while (a + i*k <= b) {
            suma = suma + 1/(a+i*k);
            i++;
        }
        cout << suma << endl;
    }
}
