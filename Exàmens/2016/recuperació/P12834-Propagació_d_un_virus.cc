#include <iostream>
#include <vector>
using namespace std;
using fila = vector<char>;
using matriu = vector<fila>;

void infecta(matriu& A, vector< vector<bool> >& B, int& acabar) { 
	int f = A.size();
	int c = A[0].size();
	acabar = f*c;
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < c; j++) {
			if (A[i][j] == 'X') {
				if (i-1 >= 0) B[i-1][j] = true;
				if (i+1 < f) B[i+1][j] = true;
				if (j-1 >= 0) B[i][j-1] = true;
				if (j+1 < c) B[i][j+1] = true;
			}
		}
	}
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < c; j++) {
			if (B[i][j]) {
				A[i][j] = 'X';
				acabar--;
			}
		}
	}		
}
				
				
void printmatriu(matriu& A) {
	int f = A.size();
	int c = A[0].size();
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < c; j++) cout << A[i][j];
		cout << endl;
	}
	cout << endl;
}
int main() {
	int f, c;
	while (cin >> f >> c) {
		int acabar = f*c;
		matriu A(f, fila(c));
		vector< vector<bool> > B(f, vector<bool> (c, false));
		for (int i = 0; i < f; i++) {
			for (int j = 0; j < c; j++) {
				cin >> A[i][j];
				if (A[i][j] == 'X') {
					B[i][j] = true;
					acabar--;
				}
			}
		}
		printmatriu(A);
		while (acabar!= 0) {
			infecta(A, B, acabar);
			printmatriu(A);
		}
		cout << "----------" << endl;
	}
}
		
		
		
		
		 

