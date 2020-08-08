#include <iostream>
using namespace std;


int main() {
	cout.setf(ios::fixed);
	cout.precision(4);
	double x;   //variable
	cin >> x;
	double q; //coeficients
	double e = 1; //per fer les potències
	double suma = 0; //per anar sumant els termes de diferent exponent
	while (cin >> q) {
		suma = suma + q*e;	
		e = e*x;
	}
	cout << suma << endl;	
}
