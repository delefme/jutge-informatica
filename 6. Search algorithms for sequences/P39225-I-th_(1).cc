#include <iostream>
using namespace std;

int main() {
	int x;
	int i;
	cin >> i;
	int j = 1;
	int aux;
	bool trencar = true; 
	while (cin >> x and x != -1) {
		if (trencar) {
			if (j == i) {
				aux = x;
				trencar = false;
			}
			else j++;
		}
	}
	cout << "At the position " << i << " there is a(n) " << aux << "." << endl;
}

