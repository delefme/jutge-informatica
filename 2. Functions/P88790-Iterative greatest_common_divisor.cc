#include <iostream>
using namespace std;

int gcd(int a, int b) {
	int aux = b;
	if (a < b) {
		b = a;
		a = aux;
	}
	if (b == 0) return a;
	else {
		int c;
		int r = a%b;
		while (r != 0) {
			c = b;
			b = r;
			r = c%r;
	}	
	return b;
	}	
	
}

int main() {
	int a,b;
	cin >> a >> b;
	cout << "The gcd of " << a << " and " << b << " is " << gcd(a,b) << "." << endl;

}
