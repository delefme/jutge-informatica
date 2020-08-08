#include <iostream>
#include <vector>
using namespace std;



void insertion_sort(vector<double>& v) {
    int n = v.size();
    for (int i = 1; i < n; i++) {
        double aux = v[i];
        int j = i;
        while (j > 0 and v[j-1] > aux) {
            v[j] = v[j-1];
            j--;
        }
        v[j] = aux;
    }
}

int main() {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(4);
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i=0; i<n; ++i) {
            cin >> V[i];
        }
        insertion_sort(V);
        for (int i=0; i<n; ++i) {
            cout << " " << V[i];
        }
        cout << endl;
    }
}
