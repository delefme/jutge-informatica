#include <iostream>
using namespace std;

int num_digits(int n, int b) {
	int compt = 1;
	while (n >= b) {
		n = n/b;
		compt++;
	}
	return compt;
}

int sum_dig_bas_b(int n, int b) {
	int suma = 0;
	while (n != 0) {
		suma += n%b;
		n = n/b;
	}
	return suma;
}
	

int primera_base_rodona(int n) {
	int b = 2;
	int sum_dig = sum_dig_bas_b(n, b);
	int num_dig = num_digits(n, b);
	
	while (sum_dig != num_dig) {
		b++;
		sum_dig = sum_dig_bas_b(n, b);
		num_dig = num_digits(n, b);
	}
	return b;
}


int main() {
    int x;
    while (cin >> x)
      cout << x << ' ' << primera_base_rodona(x) << endl;
}
