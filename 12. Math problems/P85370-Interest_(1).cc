#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    double cap, inte, t; 
    string tip;
    cin >> cap >> inte >> t >> tip;
    if (tip == "simple") cap += (inte/100)*t*cap;
    else for (int i = 0; i < t; i++) cap += (inte/100)*cap;
    cout << cap << endl;
}
