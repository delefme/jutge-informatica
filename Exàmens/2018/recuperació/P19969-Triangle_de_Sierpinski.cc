#include <iostream>
#include <vector>
using namespace std;
using fila = vector<char>;
using matriu = vector<fila>;

int alcada(int n) {
	int pot = 1;
	for (int i = 0; i < n; i++) pot *= 2;
	return pot;
}
int llargada(int n) {
	if (n == 1) return 1;
	return llargada(n-1)*2 + 1;
}

void triangle(matriu& A, int i, int l, int j, int k, int n) {
	if (n == 1) A[i][j] = 'X';
	else {
		triangle(A, i, l - alcada(n-2), j + alcada(n-2), k - alcada(n-2), n-1);
		triangle(A, i + alcada(n-2), l, j, k - llargada(n-1) - 1, n-1);
		triangle(A, i + alcada(n-2), l, j + llargada(n-1) + 1, k, n-1);
	}
} 
	

int main() {
	int n;
	while (cin >> n) {
		matriu A(alcada(n-1), fila(llargada(n), '.'));
		int i = 0;
		int l = alcada(n-1)-1;
		int j = 0;
		int k = llargada(n) -1;
		triangle(A, i, l, j, k, n);
		for (int f = 0; f < alcada(n-1); f++) {
			for (int c = 0; c < llargada(n); c++) cout << A[f][c];
			cout << endl;
		}
	}
}
	
