#include <iostream>
#include <vector>
using namespace std;


typedef vector<string> Row;
typedef vector<Row> Matrix;


int number_of_words(const Matrix& m, char c, int k) {
    int compt = 0;
    int n = m.size();
    for (int i = 0; i < n; i++) {
        int l = m[i].size();
        for (int j = 0; j < l; j++) {
            int length = m[i][j].size();
            if (length <= k);
            else {
                if (m[i][j][k] == c) compt++;
            }
        }
    }
    return compt;
}



int main () {
  int n;
  while (cin >> n) {
    Matrix v(n);
    for (int i = 0; i < n; ++i) {
      int m;
      cin >> m;
      v[i] = Row(m);
      for (int j = 0; j < m; ++j) {
        cin >> v[i][j];
        if (v[i][j] == "@") v[i][j] = "";
      }
    }

    int q;
    cin >> q;
    while (q--) {
      char c;
      int k;
      cin >> c >> k;
      cout << number_of_words(v, c, k) << endl;
    }
    cout << endl;
  }
}
