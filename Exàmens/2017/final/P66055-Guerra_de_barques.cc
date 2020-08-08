#include <iostream>
#include <vector>
using namespace std;
using fila = vector<char>;
using matriu = vector<fila>;

bool flotant(const matriu& mar, int i, int j, int f, int c) {   //Aquesta funció recorre tota una barca i determina si esta enfonsada o no
	bool viva = false;
	int auxi = i;
	int auxj = j;
	while (auxi < f and not viva and (mar[auxi][j] == 'a' or mar[auxi][j] == 'X')) {
		if (mar[auxi][j] == 'X') viva = true;
		auxi++;
	}
	auxi = i;
	while (auxi >= 0 and not viva and (mar[auxi][j] == 'a' or mar[auxi][j] == 'X')) {
		if (mar[auxi][j] == 'X') viva = true;
		auxi--;
	}
	while (auxj < c and not viva and (mar[i][auxj] == 'a' or mar[i][auxj] == 'X')) {
		if (mar[i][auxj] == 'X') viva = true;
		auxj++;
	}
	auxj = j;
	while (auxj >= 0 and not viva and (mar[i][auxj] == 'a' or mar[i][auxj] == 'X')) {
		if (mar[i][auxj] == 'X') viva = true;
		auxj--;
	}
	return viva;
}

int main() {
	int f, c;
	cin >> f >> c;
	matriu mar(f, fila(c));
	int suma = 0;
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < c; j++) {
			cin >> mar[i][j];
			if (mar[i][j] == 'X') suma++;
		}
	}
	bool fi_joc = false;
	int x, y;
	while (not fi_joc and cin >> x >> y) {
		x = x-1;
		y = y-1;
		if (mar[x][y] == '.') {
			cout << x+1 << ' ' << y+1 << ": aigua";
			mar[x][y] = 'r';
		}
		else if (mar[x][y] == 'a' or mar[x][y] == 'r') {
			fi_joc = true;
			cout << x+1 << ' ' << y+1 << ": REPETIDA";
			mar[x][y] = 'a';
		}
		else { 
			mar[x][y] = 'a';
			suma--;
			cout << x+1 << ' ' << y+1 << ": tocada";
			if (not flotant(mar, x, y, f, c)) cout << " i enfonsada";
		}
		cout << endl;
		if (suma == 0) {
			fi_joc = true;
			cout << "VICTORIA" << endl;
		}
	}
	if (not fi_joc) cout << "INACABADA" << endl;
}
			
			
		
		
						
