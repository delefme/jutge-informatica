#include <iostream>
using namespace std;

int main() {
	int x;
	int i = 1;
	int aux; //per guardar el valor de la posició del primer nombre parell
	bool trencar = true; //per guardar només la i associada al primer nombre parell
	while (cin >> x and trencar) {
		if (x%2 == 0) {
			aux = i;
			trencar = false;
		}
		else i++;
	}
	cout << aux << endl;
}

