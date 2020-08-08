#include <iostream>
using namespace std;

void romanunit(int n, char I, char V, char X) {
	if (n == 0);
	else if (n == 1) cout << I; 
	else if (n == 2) cout << I << I;
	else if (n == 3) cout << I << I << I; 
	else if (n == 4) cout << I << V;
	else if (n == 5) cout << V;
	else if (n == 6) cout << V << I; 
	else if (n == 7) cout << V << I << I;
	else if (n == 8) cout << V << I << I << I;
	else if (n == 9) cout << I << X;
	else cout << X;		
}

int main() {
	int n;
	while (cin >> n) {
		cout << n << " = ";
		romanunit(n/1000, 'M', ' ', ' '); //els caràcters estan buits ja que no arriben a quatre mil
		romanunit(n/100 - (n/1000)*10, 'C', 'D', 'M');
		romanunit(n/10 - (n/100)*10, 'X', 'L', 'C');
		romanunit(n%10, 'I', 'V', 'X');
		cout << endl;
	}
}
