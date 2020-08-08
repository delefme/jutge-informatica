#include <iostream>
#include <cmath>
using namespace std;

int choose(int n, int k) {
    if (k == 0) return 1;
    return n*choose(n-1,k-1)/k;
}

void prob(double p, int k, int n) {
    cout << k << " ";
    double pot = 1;
    for (int i = 0; i < k; i++) pot *= p;
    for (int i = n; i > k; i--) pot *= (1-p);
    int cho = choose(n, k)*pot*35;
    for (int i = 0; i < cho; i++) cout << 'X';
    cout << endl;
}

int main() {
    int n;
    double p;
    cin >> n >> p;
    for (int j = 0; j <= n; j++) prob(p, j, n);
}
