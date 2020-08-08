#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cout.setf(ios::fixed);
	cout.precision(6);
	cin >> n;
	int i = 1;
	while (n >= i) {
		string a;
		cin >> a;
		if (a == "rectangle") {
			double b,c;
			cin >> b >> c;
			cout << b*c << endl;
		}
		if (a == "circle") {
			double r;
			cin >> r;
			cout << M_PI*r*r << endl;
		}
		i = i+1;
	}
}
