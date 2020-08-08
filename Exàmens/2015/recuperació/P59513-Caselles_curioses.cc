#include <iostream>
#include <vector>
using namespace std;
using fila = vector<int>;
using matriu = vector<fila>;

bool mira_casella(matriu& A, int i, int j, int f, int c) {
	int suma = 0;
	if (i > 0 and j > 0) suma += A[i-1][j-1];
	if (i > 1 and j > 1) suma += A[i-2][j-2];
	if (i > 0 and j < c-1) suma += A[i-1][j+1];
	if (i > 1 and j < c-2) suma += A[i-2][j+2];
	if (i < f-1 and j > 0) suma += A[i+1][j-1];
	if (i < f-2 and j > 1) suma += A[i+2][j-2];
	if (i < f-1 and j < c-1) suma += A[i+1][j+1];
	if (i < f-2 and j < c-2) suma += A[i+2][j+2];
	if (suma == 42) return true;
	return false;
}

int mira_caselles(matriu& A, int f, int c) {
	int compt = 0;
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < c; j++) {
			if (mira_casella(A, i, j, f, c)) compt++;
		}
	}
	return compt;
}

int main() {
	int f, c;
	while (cin >> f >> c) {
		matriu A(f, fila(c));
		for (int i = 0; i < f; i++) {
			for (int j = 0; j < c; j++) cin >> A[i][j];
		}
		cout << mira_caselles(A, f, c) << endl;
	}
}
