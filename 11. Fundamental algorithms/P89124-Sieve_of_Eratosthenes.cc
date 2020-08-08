#include <iostream>
#include <vector>
using namespace std;

void marca_fals(int i, vector<bool>& garbell) {
    for (int j = 2*i; j < int(garbell.size()); j += i) {
        garbell[j] = false;
    }
}

vector<bool> esprimer(int n) {
    vector<bool> garbell(n, true);
    if (n > 0) garbell[0] = false;
    if (n > 1) garbell[1] = false;
    for (int i = 2; i*i <= n; i++) {
        if (garbell[i]) marca_fals(i, garbell);
    }
    return garbell;
}


int main() {
    vector<bool> es_primer = esprimer(1000001);
    int n;
    while (cin >> n) {
        if (es_primer[n]) cout << n << " is prime";
        else cout << n << " is not prime"; 
        cout << endl;
    }
}
