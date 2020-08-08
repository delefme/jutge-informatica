#include <iostream>
#include <cmath>
using namespace std;


int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    double a, b, c;
    cin >> a >> b >> c;
    double disc = b*b -4*a*c;
    if (disc < 0) cout << "sense solucio" << endl;
    else {
        double pr = (-b+sqrt(disc))/(2*a);
        double sg = (-b-sqrt(disc))/(2*a);
        if (sg < pr) cout << sg << " " << pr << endl;
        else if (pr < sg) cout << pr << " " << sg << endl;
        else cout << pr << endl;
    }
}
