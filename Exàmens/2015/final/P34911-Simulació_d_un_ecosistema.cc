#include <iostream>
#include <vector>
#include <string>
using namespace std;


struct Casella {
	string e; 
	int v;    
};

using fila = vector<Casella>;
using matriu = vector<fila>;


int numdig(int n) {
	int dig = 1;
	while (n >= 10) {
		dig++;
		n /= 10;
	}
	return dig;
}


void print_eco(matriu& eco, int f, int c) {
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < c; j++) {
			for (int k = 0; k < 10 - (int(eco[i][j].e.size())+numdig(eco[i][j].v)+1); k++) cout << ' ';
			cout << eco[i][j].e << ' ' << eco[i][j].v;
		}
		cout << endl;
	}
	cout << endl;
}

void actualitza_casella(matriu& eco, matriu& copia, int i, int j, int f, int c, int& estable) {
	int suma = eco[i][j].v;
	int compt = 1;
	if (i > 0 and eco[i-1][j].e != eco[i][j].e) {suma += copia[i-1][j].v; compt++;}
	if (i < f-1 and eco[i+1][j].e != eco[i][j].e) {suma += copia[i+1][j].v; compt++;}
	if (j > 0 and eco[i][j-1].e != eco[i][j].e) {suma += copia[i][j-1].v; compt++;}
	if (j < c-1 and eco[i][j+1].e != eco[i][j].e) {suma += copia[i][j+1].v; compt++;}
	if (eco[i][j].v == suma/compt) estable++;
	eco[i][j].v = suma/compt;
}

bool actualitza_eco_i_estable(matriu& eco, int f, int c) {
	int estable = 0;
	matriu copia = eco;
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < c; j++) {
			actualitza_casella(eco, copia, i, j, f, c, estable);
		}
	}
	if (f*c == estable) return true;
	return false;
}

int main() {
	int f, c;
	while (cin >> f >> c) {
		matriu eco(f, fila(c));
		for (int i = 0; i < f; i++) {
			for (int j = 0; j < c; j++) cin >> eco[i][j].e >> eco[i][j].v;
		}
		print_eco(eco, f, c);
		while (not actualitza_eco_i_estable(eco, f, c)) print_eco(eco, f, c);
		cout << "****************************************" << endl;
	}
}
