#include <iostream>
#include <string>
using namespace std;


bool es_equilibrat_de_tres_en_tres(int n) {
	int suma0 = 0;
	int suma1 = 0;
	int suma2 = 0;
	int i = 0;
	while (n != 0) {
		int bit = n%2;
		if (i%3 == 0) suma0 += bit;
		else if (i%3 == 1) suma1 += bit;
		else suma2 += bit;
		n = n/2;
		i++;
	}
	if (suma0 == suma1 and suma1 == suma2) return true;
	return false;
}


int main() {
    int x;
    while (cin >> x)
      cout << x << ' ' << es_equilibrat_de_tres_en_tres(x) << endl;
}
