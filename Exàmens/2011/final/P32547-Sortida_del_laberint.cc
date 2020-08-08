#include <iostream>
#include <vector>
using namespace std;

using fila = vector<char>;
using matriu = vector<fila>;



int main() {
	int files, columnes;
	while (cin >> files >> columnes) {
		matriu A(files, fila(columnes));
		for (int i = 0; i < files; i++) {
			for (int j = 0; j < columnes; j++) cin >> A[i][j];
		}
		int i = 0;
		int j = 0;
		bool estancat = false;
		while (i < files and j < columnes and not estancat) {
			if (i < files-1 and A[i+1][j] == '.') i++;
			else if (j < columnes-1 and A[i][j+1] == '.') j++;
			else estancat = true;
			if (i == files-1 and j == columnes-1) {i++; j++;}
		}
		if (not estancat) cout << "SI";
		else cout << "NO";
		cout << endl;
	}
	
}
