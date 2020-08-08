#include <iostream>
#include <vector>
using namespace std;
using fila = vector<int>;
using matriu = vector<fila>;


bool diag_creix(matriu& A, int f0, int c0, int f, int c) {
	int i = f0; int j = c0;
	int anterior = A[i][j];
	i--; j--;
	while (i >= 0 and j >= 0) {
		if (anterior >= A[i][j]) return false;
		anterior = A[i][j];
		i--; j--;
	}
	i = f0; j = c0;
	anterior = A[i][j];
	i--; j++;
	while (i >= 0 and j < c) {
		if (anterior >= A[i][j]) return false;
		anterior = A[i][j];
		i--; j++;
	}
	i = f0; j = c0;
	anterior = A[i][j];
	i++; j--;
	while (i < f and j >= 0) {
		if (anterior >= A[i][j]) return false;
		anterior = A[i][j];
		i++; j--;
	}
	i = f0; j = c0;
	anterior = A[i][j];
	i++; j++;
	while (i < f and j < c) {
		if (anterior >= A[i][j]) return false;
		anterior = A[i][j];
		i++; j++;
	}
	return true;
}




int main() {
	int f, c;
	while (cin >> f >> c) {
		matriu A(f, fila(c));
		for (int i = 0; i < f; i++) {
			for (int j = 0; j < c; j++) cin >> A[i][j];
		}
		int f0, c0;
		cin >> f0 >> c0;
		if (diag_creix(A, f0, c0, f, c)) cout << "si";
		else cout << "no";
		cout << endl;
	}
}
