#include <iostream>
#include <vector>
using namespace std;
using fila = vector<char>;
using matriu = vector<fila>;


int min(int a, int b) {
	if (a < b) return a;
	return b;
}


int creu(matriu& A, vector<int>& compta_creus, int i, int j, int f, int c) {
	int compt = 1;
	int left = j, right = j, up = i, down = i;
	int charleft = A[i][j], charright = A[i][j], charup = A[i][j], chardown = A[i][j];
	bool end = false;
	while (left > 0 and right < c-1 and up > 0 and down < f-1 and not end) {
		left--; right++; up--; down++;
		charleft = A[i][left]; charright = A[i][right]; charup = A[up][j]; chardown = A[down][j];
		if (charleft == charright and charup == chardown) {
			compt += 2;
			compta_creus[compt]++;
		}
		else end = true;
	}
	return compt;
}

vector<int> numcreus(matriu& A, int f, int c) {
	vector<int> compta_creus(min(f,c) + 1, 0);
	for (int i = 1; i < f-1; i++) {
		for (int j = 1; j < c-1; j++) creu(A, compta_creus, i, j, f, c);
	}
	return compta_creus;
}


int main() {
	int f, c;
	while (cin >> f >> c) {
		matriu A(f, fila(c));
		for (int i = 0; i < f; i++) {
			for (int j = 0; j < c; j++) cin >> A[i][j];
		}
		vector<int> compta_creus = numcreus(A, f, c);
		for (int i = 3; i < int(compta_creus.size()); i += 2) {
			if (compta_creus[i] != 0) cout << i << " : " << compta_creus[i] << endl;
		}
		cout << "----------" << endl;
	}
}
