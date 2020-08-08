#include <iostream>
using namespace std;

int gcd(int x, int y) {
	int aux = y;
	if (x < y) {
		y = x;
		x = aux;
	}
	int c;
	int r = x%y;
	while (r != 0) {
		c = y;
		y = r;
		r = c%r;
		}	
	return y;
			
}

int gcd4(int r, int s, int t, int u) {
	return gcd(r,gcd(s,(gcd(t,u))));
}
int main() {
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	cout << "The gcd of " << a << " and " << b << " is " << gcd4(a, b, c, d) << "." << endl;

}
