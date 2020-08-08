#include <iostream>
#include <vector>
using namespace std;
using fila = vector<char>;
using matriu = vector<fila>;

int main() {
	int a;
	while (cin >> a) {
		string input;
		int n = 1;
		while (a > 0) {
			n *= 2;
			a--;
		}
		matriu quadrat(n, fila(n, '.'));
		bool stop = false;
		while (not stop and cin >> input) {
			if (input == "PRINT") {
				for (int i = 0; i < n; i++) {
					for (int j = 0; j < n; j++) cout << quadrat[i][j];
					cout << endl;
				}
				cout << "----------" << endl;
			}
			else if (input == "STOP") stop = true;
			else {
				int inf = 0;
				int inc = 0;
				int fif = n;
				int fic = n;
				int m = input.size() -1;
				int auxn = n;
				for (int i = 0; i < m; i++) {
					if (input[i] == '0') {
						fif -= auxn/2;
						fic -= auxn/2;
					}
					else if (input[i] == '1') {
						inc += auxn/2;
						fif -= auxn/2;
					}
					else if (input[i] == '2') {
						inf += auxn/2;
						fic -= auxn/2;
					}
					else if (input[i] == '3') {
						inf += auxn/2;
						inc += auxn/2;
					}
					auxn = auxn/2;
				}
				if (input[m] == 'n') {
					for (int i = inf; i < fif; i++) {
						for (int j = inc; j < fic; j++) quadrat[i][j] = 'X';
					}
				}
				else if (input[m] == 'b') {
					for (int i = inf; i < fif; i++) {
						for (int j = inc; j < fic; j++) quadrat[i][j] = '.';
					}
				}
			}
		}
	}
}
							
