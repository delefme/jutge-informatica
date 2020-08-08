#include <iostream>
#include <vector>
using namespace std;

struct Empleat {
       string nom;
       int edat;
};

typedef vector<Empleat> Fila;
typedef vector<Fila> Matriu;

int main() {
	int f, c;
	while (cin >> f >> c) {
		Matriu A(f, Fila(c));
		for (int i = 0; i < f; i++) {
			for (int j = 0; j < c; j++) cin >> A[i][j].nom;
			for (int j = 0; j < c; j++) cin >> A[i][j].edat;
		}
		int n; cin >> n;
		for (int k = 0; k < n; k++) {
			int i, j;
			char x;
			cin >> i >> j >> x;
			int compt = 1;
			Empleat anterior = A[i][j];
			if (x == 'D') {
				j++;
				while (j < c and anterior.edat > A[i][j].edat and anterior.nom < A[i][j].nom) {
					anterior = A[i][j];
					j++;
					compt++;
				}
			}
			else {
				i++;
				while (i < f and anterior.edat > A[i][j].edat and anterior.nom < A[i][j].nom) {
					anterior = A[i][j];
					i++;
					compt++;
				}
			}
			cout << compt << endl;
		}
		cout << "----------" << endl;
	}
}	
