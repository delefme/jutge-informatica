#include <iostream>
#include <vector>
using namespace std;

int suma(const vector<int> & seq, int n) {
    int sumatori = 0;
    for (int j = 0; j < n; j++) {
        sumatori = sumatori + seq[j];
    }
    return sumatori;
}


bool existeix(const vector<int> & seq, int n) {
    int sumatori = 0;
    for (int j = 0; j < n; j++) {
        sumatori = sumatori + seq[j];
    }
    for (int i = 0; i < n; i++) {
        if (2*seq[i] == sumatori) return true;
    }
    return false;
}
        


int main() {
    int n; 
    while (cin >> n) {
        vector<int> seq(n);
        for (int i = 0; i < n; i++) cin >> seq[i];
        if (existeix(seq, n)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}
