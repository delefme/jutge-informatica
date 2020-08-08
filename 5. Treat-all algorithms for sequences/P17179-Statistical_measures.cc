#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(4);
	int n; //nombre de seqüències
	int m; //llargada de les seqüències
	cin >> n;
	for (int j = 0; j < n; j++) {
		while (cin >> m) {
			double suma = 0; //per fer la mitjana
			double min;
			double max;
			double x;
			bool primeraiter = true;
			for (int i = 0; i < m; i++) {
				cin >> x;
				if (primeraiter) {
					min = x;
					max = x;
					suma = x;
					primeraiter = false;
				}
				else {
					if (min > x) min = x;
					else if (max < x) max = x;
					suma = suma + x;
				}
			}
			cout << min << " " << max << " " << suma/m << endl;
		}
    }
}

