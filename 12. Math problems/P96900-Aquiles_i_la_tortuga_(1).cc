#include <iostream>
using namespace std;


int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    double d, va, vt, vr;
    cin >> d >> va >> vt;
    vr = va - vt;
    if (vr <= 0) cout << "mai";
    else cout << d/vr << " segons";
    cout << endl;
}
