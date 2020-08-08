#include <iostream>
#include <vector>
using namespace std;


void escriu_barreja(int a, int b) {
	long long int resultat = 0;
	long long int pot10 = 1;
	while (a != 0) {
		resultat += (b%10)*pot10;
		b /= 10;
		pot10 *= 10;
		resultat += (a%10)*pot10;
		a /= 10;
		pot10 *= 10;
	}
	cout << resultat << endl;
} 
		


int main() {
	int n;
	while (cin >> n) {
		vector<int> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) escriu_barreja(v[i], v[j]);
		}
	}
}
