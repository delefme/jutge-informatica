#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cout.setf(ios::fixed);
	cout.precision(6);
	while (cin >> n) {
		cout << n*n << " " << sqrt(double(n)) << endl;
	}
}
