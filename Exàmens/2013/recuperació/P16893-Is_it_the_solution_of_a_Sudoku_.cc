#include <iostream>
#include <vector>
using namespace std;
using fila = vector<int>;
using matriu = vector<fila>;


void read_sudoku(matriu& sudoku) {
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) cin >> sudoku[i][j];
	}
}

bool check_rows(matriu& sudoku) {
	for (int i = 1; i < 10; i++) {
		vector<bool> used(9, false);
		for (int j = 1; j < 10; j++) used[sudoku[i][j]-1] = true;
		for (int k = 0; k < 9; k++) {
			if (used[k] == false) return false;
		}
	}
	return true;
}

bool check_columns(matriu& sudoku) {
	for (int j = 1; j < 10; j++) {
		vector<bool> used(9, false);
		for (int i = 1; i < 10; i++) used[sudoku[i][j]-1] = true;
		for (int k = 0; k < 9; k++) {
			if (used[k] == false) return false;
		}
	}
	return true;
}

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
	

bool check_boxes(matriu& sudoku) {
	if (not check_box(sudoku, 1, 1)) return false;
	if (not check_box(sudoku, 1, 4)) return false;
	if (not check_box(sudoku, 1, 7)) return false;
	if (not check_box(sudoku, 4, 1)) return false;
	if (not check_box(sudoku, 4, 4)) return false;
	if (not check_box(sudoku, 4, 7)) return false;
	if (not check_box(sudoku, 7, 1)) return false;
	if (not check_box(sudoku, 7, 4)) return false;
	if (not check_box(sudoku, 7, 7)) return false;
	return true;
}

int main() {
	matriu sudoku(10, fila(10));
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		read_sudoku(sudoku);
		if (check_rows(sudoku) and check_columns(sudoku) and check_boxes(sudoku)) cout << "yes";
		else cout << "no";
		cout << endl;
	}
}
