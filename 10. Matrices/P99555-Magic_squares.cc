#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector< vector<int> > A(n, vector<int>(n));
        vector<int> sumacol(n, 0);
        int sumadig = 0;
        int suma = 0;
        int aux;
        bool ismagic = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> A[i][j];
                if (ismagic) {
                    sumacol[j] += A[i][j];
                    suma += A[i][j];
                    if (i == j) {
                        sumadig += A[i][j];
                    }
                }
            }
            if (ismagic) {
                if (i != 0) {
                    if (suma != aux) ismagic = false;
                }
                else {
                    aux = suma;
                }
                suma = 0;
            }
        }
        if (sumadig != aux) ismagic = false;
        for (int i = 0; i < n; i++) {
            if (aux != sumacol[i]) ismagic = false;
        }
        sumadig = 0;
        int j = n - 1;
        for (int i = 0; i < n; ++i) {
            sumadig += A[i][j];
            --j;
        }
        vector<int> compt(n*n, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                compt[A[i][j]-1]++;
            }
        }
        for (int i = 0; i < n*n; i++) {
            if (compt[i] != 1) ismagic = false;
        }
        if (sumadig != aux) ismagic = false;
        if (ismagic) cout << "yes";
        else cout << "no";
        cout << endl;
    }
}
