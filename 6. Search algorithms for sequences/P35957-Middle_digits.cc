#include <iostream>
using namespace std;

bool par(int n) {
    int i = 1;
    int d = 10;
    while (d <= n) {
        d *= 10;
        ++i;
    }
    if (i%2 == 0) return true;
    return false;
}

int middig(int n) {
    int prod = 1;
    while (prod*prod*10 < n) {
        prod *= 10;
    }
    return (n/prod)%10;
}



int main() {
    int nombre, n;
    cin >> nombre;
    bool perd = false;
    char qui;
    int k;
    cin >> k;
    if (par(k)) perd = true;
    int aux = middig(k);
    int i = 1;
    while (not perd and i < 2*nombre) {
        cin >> n;
        if (par(n)) perd = true;
        else {
            int mid = middig(n);
            if (aux != mid) perd = true;
        }
        ++i;
    }
    if (perd) {
        if (i%2 == 0) qui = 'A';
        else qui = 'B';
    }
    else qui = '=';
    cout << qui << endl;
}
