#include <iostream>
#include <vector>
using namespace std;
using fila = vector<char>;
using matriu = vector<fila>;


void avansa(matriu& A, bool down, bool right, int& i, int& j, int f, int c) {
	if (down and right) {
		while (i < f and j < c) {
			A[i][j] = 'X';
			i++; j++;
		}
	}
	else if (down and not right) {
		while (i < f and j >= 0) {
			A[i][j] = 'X';
			i++; j--;
		}
	}
	else if (not down and right) {
		while (i >= 0 and j < c) {
			A[i][j] = 'X';
			i--; j++;
		}
	}
	else if (not down and not right) {
		while (i >= 0 and j >= 0) {
			A[i][j] = 'X';
			i--; j--;
		}
	}
}

void cantonades(matriu& A, int i, int j, bool& fi, int f, int c) {
	if (i == -1 and j == -1) fi = true;
	else if (i == -1 and j == c) fi = true;
	else if (i == f and j == -1) fi = true;
	else if (i == f and j == c) fi = true;
}


void canvi_direccio(matriu& A, int& i, int& j, bool& down, bool& right, int f, int c) {
	if (i == -1) {
		i = 0;
		down = true;
		if (right) j--;
		else j++; 
	}
	else if (i == f) {
		i = f-1;
		down = false;
		if (right) j--;
		else j++;
	}
	else if (j == -1) {
		j = 0;
		right = true;
		if (down) i--;
		else i++;
	}
	else if (j == c) {
		j = c-1;
		right = false;
		if (down) i--;
		else i++;
	}
}

void printmatriu(matriu& A, int f, int c) {
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < c; j++) cout << A[i][j];
		cout << endl;
	}
	cout << endl;
}

int main() {
	int f, c;
	while (cin >> f >> c) {
		matriu tauler(f, fila(c, '.'));
		int i = 0;
		int j = 0;
		bool fi = false;
		bool down = true;
		bool right = true;
		while (not fi) {
			avansa(tauler, down, right, i, j, f, c);
			cantonades(tauler, i, j, fi, f, c);
			if (not fi) canvi_direccio(tauler, i, j, down, right, f, c);
		}
		printmatriu(tauler, f, c);
	}
}
