#include <iostream>
#include <vector>
using namespace std;
using fila = vector<char>;
using matriu = vector<fila>;


//aquesta funció em diu si hi ha la paraula oso
bool oso(const matriu& A, int i, int j, int f, int c) {   //no podem posar else if perquè sinó ens podríem estar saltant algun cas
    if (A[i][j] == 'S') {
        if (i < f-1 and i > 0) {
            if (A[i+1][j] == 'O' and A[i-1][j] == 'O') return true;
        }
        if (j < c-1 and j > 0) {
            if (A[i][j+1] == 'O' and A[i][j-1] == 'O') return true;
        }           
    }
    else if (A[i][j] == 'O') {
        if (i < f-2) {
            if (A[i+1][j] == 'S' and A[i+2][j] == 'O') return true;
        }
        if (i > 1) {
            if (A[i-1][j] == 'S' and A[i-2][j] == 'O') return true;
        }
        if (j < c-2) {
            if (A[i][j+1] == 'S' and A[i][j+2] == 'O') return true;
        }
        if (j > 1) {
            if (A[i][j-1] == 'S' and A[i][j-2] == 'O') return true;
        }
    }
    return false;
}

void escriure_matriu(const matriu& A, int f, int c) {
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) cout << A[i][j];
        cout << endl;
    }
    cout << endl;
}

int main() {
    int f, c;
    while (cin >> f >> c) {
        int torn = 0;       
        matriu A (f, fila(c, '.'));
        int i, j;
        char lletra;
        bool guanya = false;
        for (int k = 0; k < f*c; k++) {
            cin >> i >> j >> lletra;
            if (not guanya) {
                A[i][j] = lletra;
                guanya = oso(A, i, j, f, c);
                if (guanya) {
                    torn = k%2;         //l'anna tindrà torns parells i en bernat imparells
                }
            }
        }
        if (not guanya) cout << "empat";
        else {
            if (torn%2 == 0) cout << "Anna";
            else cout << "Bernat";
        }
        cout << endl;
        escriure_matriu(A, f, c);
    }
}
