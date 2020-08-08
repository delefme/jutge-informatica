#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin >> a >> b;
	int x = a;
	int y = b;
	if (a == 0 or b == 0) cout << "The gcd of " << a << " and " << b << " is " << b << "." << endl;
	else {
		int c;
		int aux = b;
		if (a < b) {
			b = a;
			a = aux;
		}	
		int r = a%b;
		while (r != 0) {
			c = b;
			b = r;
			r = c%r;
		}	
		cout << "The gcd of " << x << " and " << y << " is " << b << "." << endl;

	}
}
