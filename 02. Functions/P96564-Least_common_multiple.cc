#include <iostream>
using namespace std;

int gcd(long int a, long int b) {
	long int aux = b;
	if (a < b) {
		b = a;
		a = aux;
	}
	if (b == 0) return a;
	else {
		long int c;
		long int r = a%b;
		while (r != 0) {
			c = b;
			b = r;
			r = c%r;
	}	
	return b;
	}	
}
int mcm(long int a, long int b) {
    return (a*b/gcd(a,b));
}
int main() {
    long int x;
    long int n;
    while (cin >> n) {
        long int prod = 1;
        if (n == 0);
        else {
            int i = 0;
            while (i < n) {
                cin >> x;
                prod = mcm(prod, x);
                i = i+1;
            }
            cout << prod << endl;
        }
    }
}
