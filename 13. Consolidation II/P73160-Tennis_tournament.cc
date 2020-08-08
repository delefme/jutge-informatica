#include <iostream>
#include <string>
#include <vector>
using namespace std;

string winner(const vector<string>& nom, const vector<bool>& guanya) {
    int n = nom.size();
    int i = 0;
    while (i < n-1) {
           if (guanya[i] == 0) i = i*2 + 2;
           else i = i*2 + 1;
    }
    return nom[i-n+1];
}
        
        


int main() {
  int m;
  while (cin >> m) {
    vector<string> V(m);
    for (int i = 0; i < m; ++i) cin >> V[i];
    vector<bool> A(m - 1);
    for (int i = 0; i < m - 1; ++i) {
      int x;
      cin >> x;
      A[i] = x;
    }

    cout << winner(V, A) << endl;
  }
}
