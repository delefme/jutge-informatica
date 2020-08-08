#include <iostream>
using namespace std;


int minim_divisor_quadrat(int n) {
	int d = 1;
	for (int i = 2; i*i <= n; i++) {
		int compt = 0;
		while (n%i == 0) {
			n /= i;
			compt++;
		}
		if (compt%2 == 1) d *= i;
	}
	d *= n;
	return d;
}
		


int main() {
  int n;
  while (cin >> n) cout << minim_divisor_quadrat(n) << endl;
}
