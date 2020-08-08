#include <iostream>
#include <vector>
using namespace std;
typedef vector< vector<int> > matriu;


int main() {
    int n;
    bool espai = false;
    while (cin >> n) {
        if (espai) cout << endl;
        else espai = true;
        vector< vector<char> > A(n, vector<char>(n, 'X'));
        int col = 0;
        int fil = 0;
        for (int k = 0; k < n; k++) {
            if (k%2 == 0) {          //observem que si es parell avanÃ§arem en vertical
                if (k%4 == 0) {       //en aquest cas haurem de baixar
                    for (int i = 0; i < n - k - 1; i++) A[fil+i][col] = '.';
                    col++;
                    fil = fil + n - k - 2;
                        
                }
                else {                          // haurem de pujar
                    for (int i = 0; i < n - k - 1; i++) A[fil-i][col] = '.';
                    col--;
                    fil = fil - (n - k - 2);
                }
            }
            if (k%2 == 1) {
                if (k%4 == 1) {                 //haurem d'anar a la dreta
                    for (int i = 0; i < n - k - 1; i++) A[fil][col+i] = '.';
                    fil--;
                    col = col + (n - k - 2);
                }
                else {                          // haurem d'anar a l'esquerra
                    for (int i = 0; i < n - k - 1; i++) A[fil][col-i] = '.';
                    fil++;
                    col = col - (n - k - 2);
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) cout << A[i][j];
            cout << endl;
        }
    }
}
