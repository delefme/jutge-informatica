#include <iostream>
#include <vector>
using namespace std;
using fila = vector<char>;
using matriu = vector<fila>;


int modul(int n, int b) {
	if (n >= 0) return n%b;
	return b+n;
}


void avansa(const matriu& A, int& i, int& j, char k) { 
	int f = A.size();
	int c = A[0].size();
	if (k == 'N' and A[modul(i-1, f)][j] != 'X') i = modul(i-1, f);
	else if (k == 'S' and A[(i+1)%f][j] != 'X') i = (i+1)%f;
	else if (k == 'E' and A[i][(j+1)%c] != 'X') j = (j+1)%c;
	else if (k == 'O' and A[i][modul(j-1, c)] != 'X') j = modul(j-1, c);
}

char gira(char gir, int& actual) {
	if (gir == 'D') actual = (actual+1)%4;
	else if (gir == 'E') actual = modul(actual - 1, 4);
	if (actual == 0) return 'N';
	if (actual == 1) return 'E';
	if (actual == 2) return 'S';
	return 'O';
}

int main() {
	int f, c;
	while (cin >> f >> c) {
		matriu A (f, fila(c));
		int x, y;
		for (int i = 0; i < f; i++) {
			for (int j = 0; j < c; j++) {
				cin >> A[i][j];
				if (A[i][j] == 'R') {
					x = i;
					y = j;
				}
			}
		}
		char ordre;
		char orienta = 'N';
		int actual = 0;
		while (cin >> ordre and ordre != 'P') {
			if (ordre == 'A') avansa(A, x, y, orienta);
			else orienta = gira(ordre, actual);
			cout << '(' << y << ", " << x << ") " << orienta << endl;
		}
		cout << "----------" << endl;
	}
}
