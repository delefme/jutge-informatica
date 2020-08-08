#include <iostream>
#include <vector>
#include <set>
using namespace std;


typedef set<int> SE;
typedef SE::iterator SI;


bool exists(int x, const vector<int>& V) {
    int n = V.size();
    for (int i = 0; i < n; i++) {
        if (V[i] == x) return true;
    }
    return false;
}


int main() {
  int n;
  while (cin >> n) {
    vector<int> V(n);
    SE S;
    for (int i = 0; i < n; ++i) {
      cin >> V[i];
      S.insert(V[i]);
    }
    vector<int> A(S.begin(), S.end());
    int m = A.size();

    cout << exists(1234, V) << endl;
    cout << exists(-1000000, V) << endl;

    if (n < 100) {
      for (int i = 0; i < m; ++i) cout << exists(A[i], V) << endl;
      for (int i = 1; i < m; ++i)
        cout << exists((A[i] + A[i-1])/2, V) << endl;
    }
    else
      for (int rep = 1000; rep > 0; --rep)
        for (int i = 0; i < m; ++i)
          cout << exists(A[i], V) << endl;
  }
}
