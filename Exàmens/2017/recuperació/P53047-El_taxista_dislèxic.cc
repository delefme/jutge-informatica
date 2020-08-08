#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


string difer(string dalt, string baix) {
	int n = dalt.size();
	string resta = dalt;
	for (int i = n-1; i >= 0; --i) {
		int up = int(dalt[i] - '0');
		int down = int(baix[i] - '0');
		if (down > up) {
			up += 10;
			baix[i-1] += 1;
		}
		resta[i] = char(up - down + '0');
	}
	return resta;
}

bool ordena_decreixent(char a, char b) {
	return a > b;
}

int main() {
	string nombre;
	while (cin >> nombre) {
		string max = nombre;
		string min = nombre;
		sort(min.begin(), min.end());
		sort(max.begin(), max.end(), ordena_decreixent);
		if (difer(nombre, min) > difer(max, nombre)) cout << difer(nombre, min);
		else cout << difer(max, nombre);
		cout << endl;
	}
}
			
				
		

		
