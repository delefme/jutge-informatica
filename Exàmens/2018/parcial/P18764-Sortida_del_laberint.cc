#include <iostream>
using namespace std;

int main() {
	char x;
	int files, columnes;
	while (cin >> files >> columnes) {
		int i = 0;
		int j = 0;
		bool estancat = false;
		cin >> x;
		while (i < files and j < columnes) {
			if (j == columnes-1) {
				if (i == files-1) i++;
				else {
					for (int k = 0; k < columnes; ++k) cin >> x;
					++i;
					if (x == 'X') estancat = true;
				}
			}
			else {
				cin >> x;
				if (x == '.') ++j;
				else {
					if (i == files-1) {
						estancat = true;
						++i;
						for (int k = j+2; k < columnes; ++k) cin >> x;
					}
					else {
						for (int k = 0; k < columnes-1; ++k) cin >> x;
						if (x == 'X') estancat = true;
						++i;
					}
				} 
			}
		}	
		if (not estancat) cout << "si";
		else cout << "no";
		cout << endl;
	}
}

			

