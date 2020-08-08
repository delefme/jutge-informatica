#include <iostream>
#include <vector>
using namespace std;


vector<int> concatenation(const vector<int> & V1, const vector<int> & V2) {
    int n = V2.size();
    int m = V1.size();
    vector<int> concat(n+m);
    for (int i = 0; i < m; i++) {
        concat[i] = V1[i];
    }
    for (int i = 0; i < n; i++) {
        concat[i+m] = V2[i];
    }
    return concat;
}


int main() {
  int n1;
  while (cin >> n1) {
    vector<int> V1(n1);
    for (int i = 0; i < n1; ++i) cin >> V1[i];
    int n2;
    cin >> n2;
    vector<int> V2(n2);
    for (int i = 0; i < n2; ++i) cin >> V2[i];
    vector<int> res = concatenation(V1, V2);
    cout << res.size() << endl;
    for (int i = 0; i < (int)res.size(); ++i) cout << " " << res[i];
    cout << endl;
  }
}
