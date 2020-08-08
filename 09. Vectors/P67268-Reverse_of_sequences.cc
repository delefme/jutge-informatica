#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        for (int k = 0; k < n; k++) cin >> v[k];
        int aux;
        for (int i = 0; i < n/2; i++) {
            aux = v[i];
            v[i] = v[n-i-1];
            v[n-i-1] = aux;
        }
        for (int j = 0; j < n; j++) {
            cout << v[j];
            if (j != n-1) cout << " ";
        }
        cout << endl;
    }
}
