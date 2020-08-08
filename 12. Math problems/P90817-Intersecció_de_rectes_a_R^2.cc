#include <iostream>
#include <cmath>
using namespace std;

void swap2(double& a, double& b) {
	double aux = a;
	a = b;
	b = aux;
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    double a, b, c, ap, bp, cp;
    cin >> a >> b >> c >> ap >> bp >> cp;
    if ((a == 0 and b == 0 and c == 0) or (ap == 0 and bp == 0 and cp == 0)) cout << "No hi ha interseccio.";
    else if (b*bp == 0) {
        if (b == 0 and bp == 0) {
            if (-c/a == -cp/ap) cout << "La interseccio es una recta";
            else cout << "No hi ha interseccio";
        }
        else {
            if (b == 0) {
                swap2(a, ap);
                swap2(b, bp);
                swap2(c, cp);
            }
            double x = (-cp + (c*bp)/b)/(ap - (bp/b)*a);
            double y = (-c - a*x)/b;
            cout << x+1e-8 << " " << y+1e-8;
        }
    }
    else if (a*ap == 0) {
        if (ap == 0 and a == 0) {
            if (c/b == cp/bp) cout << "La interseccio es una recta.";
            else cout << "No hi ha interseccio.";
        }
        else {
            double x = (-cp + (c*bp)/b)/(ap - (bp/b)*a);
            double y = (-c - a*x)/b;
            cout << x+1e-8 << " " << y+1e-8;
        }
    }
    else {
        if (a/ap == b/bp) {
            if (c != 0 and cp != 0) {
                if (c/cp == b/bp) cout << "La interseccio es una recta.";
                else cout << "No hi ha interseccio.";
            }
            else {
                if (cp == c) cout << "La interseccio es una recta.";
                else cout << "No hi ha interseccio.";
            }
        }
        else {
            double x = (-cp + (c*bp)/b)/(ap - (bp/b)*a);
            double y = (-c - a*x)/b;
            cout << x+1e-8 << " " << y+1e-8;
        }
    }
    cout << endl;
}
