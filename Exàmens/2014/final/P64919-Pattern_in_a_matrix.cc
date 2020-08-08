#include <iostream>
#include <vector>
using namespace std;


bool is_there(const vector<vector<char> >& P, const vector<vector<char> >& M, int i, int j) {
	int fp = P.size();
	int cp = P[0].size();
	for (int k = i; k < i+fp; k++) {
		for (int l = j; l < j+cp; l++) {
			if (P[k-i][l-j] != M[k][l]) return false;
		}
	}
	return true;
}


int pattern(const vector<vector<char> >& P, const vector<vector<char> >& M) {
	int fm = M.size();
	int cm = M[0].size();
	int fp = P.size();
	int cp = P[0].size();
	int compt = 0;
	for (int i = 0; i < fm - fp + 1; i++) {
		for (int j = 0; j < cm - cp + 1; j++) {
			if (is_there(P, M, i, j)) compt++;
		}
	}
	return compt;
}


int main() {
  int n1, m1;
  while (cin >> n1 >> m1) {
    vector<vector<char> > P(n1, vector<char>(m1));
    for (int i = 0; i < n1; ++i)
      for (int j = 0; j < m1; ++j) cin >> P[i][j];
    int n2, m2;
    cin >> n2 >> m2;
    vector<vector<char> > M(n2, vector<char>(m2));
    for (int i = 0; i < n2; ++i)
      for (int j = 0; j < m2; ++j) cin >> M[i][j];
    cout << pattern(P, M) << endl;
  }
}
