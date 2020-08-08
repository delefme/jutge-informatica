#include <iostream>
using namespace std;

int number_of_digits(int a) {
	int i = 1; //el nombre de dígits
	int d = 10; //per les potències de 10
	while (a/d > 0) {
		i = i+1;
		d = 10*d;
	}
	return i;
}

int main() {
	int a;
	cin >> a;
	cout << number_of_digits(a) << endl;
}
