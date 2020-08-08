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

    
bool read_rational(int& num, int& den) {
    char c;
    if (cin >> num >> c >> den) {
        int x = gcd(num, den);
        num = num/x;
        den = den/x;
        return true;
    }
    return false;
}


int main() {
  int num, den;
  while (read_rational(num, den)) cout << num << ' ' << den << endl;
}
