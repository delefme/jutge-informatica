#include <vector>
#include <iostream>
using namespace std;
typedef vector< vector<int> > Matrix;


void swap2(int& a, int& b) {
	int aux = a;
	a = b;
	b = aux;
}

void transpose(Matrix& M) {
    int n = M.size();
    for (int j = 0; j < n; j++) {
        for (int i = j+1; i < n; i++) swap2(M[j][i], M[i][j]);
    }
} 


int main ()
{
    int n;
    while (cin >> n) {
        vector< vector<int> > M(n, vector<int>(n));
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cin >> M[i][j];
        }   }
        transpose(M);
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cout << M[i][j] << " ";
            }
            cout << endl;
        }   
        cout << endl;
    }
}
