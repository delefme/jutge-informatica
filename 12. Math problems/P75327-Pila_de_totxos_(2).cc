#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(10);
    long int n;
    cin >> n;
    long int term = int(-0.5+sqrt(0.25 + 2*n));
    cout << term << endl;
}
