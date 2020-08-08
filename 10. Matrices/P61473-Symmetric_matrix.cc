#include <iostream>
#include <vector>
using namespace std;


typedef vector< vector<int> > Matrix;


bool is_symmetric(const Matrix& m) {
    int n = m.size();
    for (int j = 0; j < n; j++) {
        for (int i = j+1; i < n; i++) {
            if (m[j][i] != m[i][j]) return false;
        }
    }
    return true;
}


int main() {
  int n;
  while (cin >> n) {
    vector< vector<int> > M(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j) cin >> M[i][j];
    cout << is_symmetric(M) << endl;

    int q;
    cin >> q;
    while (q--) {
      int m;
      cin >> m;
      vector<int> I(m), J(m), C(m);
      for (int k = 0; k < m; ++k) {
        int v;
        cin >> I[k] >> J[k] >> v;
        C[k] = M[I[k]][J[k]];
        M[I[k]][J[k]] = v;
      }
      cout << is_symmetric(M) << endl;
      for (int k = 0; k < m; ++k) M[I[k]][J[k]] = C[k];
    }
  }
}
