#include <iostream>
#include <vector>
using namespace std;
using fila = vector<int>;
using matriu = vector<fila>;


bool check_box(matriu& sudoku, int k, int l) {
	vector<bool> used(9, false);
	for (int i = k; i < k+3; i++) {
		for (int j = l; j < l+3; j++) used[sudoku[i][j]-1] = true;
	}
	for (int a = 0; a < 9; a++) {
		if (used[a] == false) return false;
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
		int compt = 0;
		for (int i = 0; i < f - 2; i++) {
			for (int j = 0; j < c-2; j++) {
				if (check_box(A, i, j)) compt++;
			}
		}
		cout << compt << endl;
	}
}
				
