#include <iostream>
using namespace std;


int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    double a, b, c;
    cin >> a >> b >> c;
    double x, y;
    x = -b/(2*a);
    y = a*x*x + b*x + c;
    cout << x << endl << y << endl;
    if (a < 0) cout << "maxim";
    else cout << "minim";
    cout << endl;
}
