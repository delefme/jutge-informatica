#include <iostream>
using namespace std;


int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    double t, k;
    cin >> t >> k;
    if (k >= 1) cout << "mai";
    else cout << t/(1-k) << " segons";
    cout << endl;
}
