#include <iostream>
#include <vector>
using namespace std;


vector<double> intersection(const vector<double> & V1, const vector<double> & V2) {
    int v1 = V1.size();
    int v2 = V2.size();
    vector<double> A(0);
    int i = 0;
    int j = 0;
    while (j < v2 and i < v1) {
        if (V1[i] > V2[j]) {
            j++;
        }
        else if (V1[i] < V2[j]) {
            i++;
        }
        else {
            A.push_back(V1[i]);
            i++;
            j++;
            while (V1[i] == V1[i-1]) {
                i++;
            }
            while (V2[j] == V2[j-1]) {
                j++;
            }
        }
    }
    return A;
}

int main() {
  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(4);

  int n1;
  while (cin >> n1) {
    vector<double> V1(n1);
    for (int i = 0; i < n1; ++i) cin >> V1[i];
    int n2;
    cin >> n2;
    vector<double> V2(n2);
    for (int i = 0; i < n2; ++i) cin >> V2[i];

    vector<double> res = intersection(V1, V2);

    int n3 = res.size();
    cout << n3 << endl;
    for (int i = 0; i < n3; ++i) cout << " " << res[i];
    cout << endl << endl;

    for (int r = 0; r < 200; ++r) {
      vector<double> res2 = intersection(V1, V2);
      if (res2 != res) cout << "Resultats diferents amb la mateixa entrada!" << endl;
    }
  }
}
