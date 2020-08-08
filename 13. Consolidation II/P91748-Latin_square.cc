#include <iostream>
#include <vector>
using namespace std;


typedef vector<int> Fila;
typedef vector<Fila> Quadrat;


bool es_llati(const Quadrat& q) {
	int n = q.size();
	bool found = false;
	int i = 0;
	while (not found and i < n) {
		vector<bool> fila(n+1, false);
		int j = 0;
		while (not found and j < n) {
			if (q[i][j] == 0 or q[i][j] > n) found = true;
			else if (fila[q[i][j]] == true) found = true;
			else fila[q[i][j]] = true;
			j++;
		}
		i++;
	}
	i = 0;
	while (not found and i < n) {
		vector<bool> columna(n+1, false);
		int j = 0;
		while (not found and j < n) {
			if (q[j][i] == 0 or q[j][i] > n) found = true;
			else if (columna[q[j][i]] == true) found = true;
			else columna[q[j][i]] = true;
			j++;
		}
		i++;
	}
	return not found;
}
		
			


int main() {
  int n;
  while (cin >> n) {
    Quadrat q(n, Fila(n));
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j) cin >> q[i][j];
    cout << es_llati(q) << endl;

    int c;
    cin >> c;
    while (c--) {
      int i, j;
      cin >> i >> j;
      cin >> q[i][j];
      cout << es_llati(q) << endl;
    }
  }
}
