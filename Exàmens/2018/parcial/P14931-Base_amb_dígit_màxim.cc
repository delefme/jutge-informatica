#include <iostream>
using namespace std;

void nombre_en_base_b(int n, int b) {  //escriu un nombre en base b
	if (n != 0) {
		nombre_en_base_b(n/b, b);
		if (n%b < 10) cout << n%b;
		else cout << (char)('A' + (n%b - 10));
	}
}

void basemax(int x, int& max, int j, int& base) {
	while (x != 0) {
		if (x%j > max or (x%j == max and j < base)) {
			max = x%j;
			base = j;
		}
		x = x/j;
	}			
}
int main() {
	int x;
	while (cin >> x) {
		int max = 2;
		int base = 2;
		for (int i = 2; i <= 36; i++) { 
			if (x%i >= max) {
				max = x%i;
				base = i;
			}
		}
		for (int j = max+1; j <= 36; j++) basemax(x, max, j, base);
		cout << x << " = ";
		nombre_en_base_b(x, base);
		cout << " (base " << base << ")" << endl;
	}
}
