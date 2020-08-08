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

void read_rational(int& num, int& den) {
    char c;
    cin >> num >> c >> den;
    int x = gcd(num, den);
    num = num/x;
    den = den/x;
}
    


int main() {
  int t;
  cin >> t;
  while (t--) {
    int num, den;
    read_rational(num, den);
    cout << num << ' ' << den << endl;
  }
}
