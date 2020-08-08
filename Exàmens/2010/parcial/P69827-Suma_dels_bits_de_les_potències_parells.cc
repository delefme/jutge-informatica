#include <iostream>
using namespace std;


int suma_bits_potencies_parells(int n) {
	int suma = 0;
	int i = 0;
	while (n != 0) {
		if (i%2 == 0) suma += n%2;
		n = n/2;
		i++;
	}
	return suma;
}
	

int main() {
    int x;
    while (cin >> x) cout << suma_bits_potencies_parells(x) << endl;
}

