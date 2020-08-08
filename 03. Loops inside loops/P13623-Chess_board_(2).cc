#include <iostream>
using namespace std;


int main() {
	int f, c;
	cin >> f >> c;
	int suma = 0;	
	if (c%2 == 0) {	//si el nombre de columnes Ã©s parell
		for (int i = 0; i < f; i++) {
			if (i%2 == 1) { //files imparelles haurem de sumar columnes parelles
				for (int j = 1; j <= c; j++) {
					if (j%2 == 0) {
						char n;
						cin >> n;
						int x = n - '0';
						suma = suma + x;
					}
					else {
						char n;
						cin >> n;
					}
				}
			}
			else { //files parelles haurem de sumar columnes imparelles
				for (int j = 1; j <= c; j++) {
					if (j%2 == 1) {
						char n;
						cin >> n;
						int x = n - '0';
						suma = suma + x;
					}
					else {
						char n;
						cin >> n;
					}
				}
			}
		}
		cout << suma << endl;
	}
	else { //per  nombre de columnes imparell
		for (int i = 1; i <= f; i++) {
			if (i%2 == 1) { //files imparelles haurem de sumar columnes imparelles
				for (int j = 1; j <= c; j++) {
					if (j%2 == 1) {
						char n;
						cin >> n;
						int x = n - '0';
						suma = suma + x;
					}
					else {
						char n;
						cin >> n;
					}
				}
			}
			else { //files parelles haurem de sumar columnes parelles
				for (int j = 1; j <= c; j++) {
					if (j%2 == 0) {
						char n;
						cin >> n;
						int x = n - '0';
						suma = suma + x;
					}
					else {
						char n;
						cin >> n;
					}
				}
			}
		}
		cout << suma << endl;
	}
}
