#include <iostream>
#include <vector>
using namespace std;
using matriu = vector< vector<int> >;

void marca_camp(int f, int c, vector< vector<int> >& A, int i, int j) {
	while (i < f and A[i][j] != 0) {
		int aux = j;
		while (aux < c and A[i][aux] != 0) {
			A[i][aux] = 0;
			aux++;
		}
		i++;
	}
}
		


int main() {
	int f, c;
	while (cin >> f >> c) {
		matriu A(f, vector<int>(c));
		for (int i = 0; i < f; i++) {
			for (int j = 0; j < c; j++) cin >> A[i][j];
		}
		int compt = 0;
		for (int i = 0; i < f; i++) {
			for (int j = 0; j < c; j++) {
				if (A[i][j] != 0) {
					compt++;
					marca_camp(f, c, A, i, j);
				}
			}
		}
		cout << compt << endl;
	}
}
