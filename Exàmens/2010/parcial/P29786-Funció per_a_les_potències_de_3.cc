#include <iostream>
using namespace std;


bool es_potencia_de_3(int n) {
	if (n == 0) return false;
	if (n == 1) return true;
	if (n%3 != 0) return false;
	return es_potencia_de_3(n/3);
}


int main() {
    int x;
    while (cin >> x) cout << es_potencia_de_3(x) << endl;
}

