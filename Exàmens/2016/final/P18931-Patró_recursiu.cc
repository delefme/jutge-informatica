#include <iostream>
#include <vector>
using namespace std;

using fila = vector<char>;
using matriu = vector<fila>;

int power(int a, int b){
	int pot = 1;
	for(int i=0; i < b; ++i){
		pot*= a;
	}
	return pot;
}



void patro(matriu& A, int i, int j, int k, int l, int n){
	if(n != 1) {
		int columna = (l + j)/2;
		int fila = (k + i)/2;
		for (int a = i+1; a < k; a++) A[a][columna] = '.';
		for (int a = j+1; a < l; a++) A[fila][a] = '.';
		patro(A, i, j, fila-1, columna-1, n-1);
		patro(A, i, columna+1, fila-1, l, n-1);
		patro(A, fila+1, j, k, columna-1, n-1);
		patro(A, fila+1, columna+1, k, l, n-1);
	}
}




int main() {
	int n;
	while(cin >> n){
		int m = power(2, n)-1;
		matriu A(m, fila(m,'#'));
		patro(A,0,0,m-1,m-1, n);
		for(int i = 0; i < m; ++i){
			for(int j = 0; j < m; ++j) cout << A[i][j];
			cout << endl;
		}
	}
}
