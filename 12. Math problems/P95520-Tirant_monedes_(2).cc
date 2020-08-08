#include <iostream>
#include <cmath>
using namespace std;

int choose(int n, int k) {
    if (k == 0) return 1;
    return n*choose(n-1,k-1)/k;
}


int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    double pot = 1;
    int n;
    double k, p;
    cin >> n >> k >> p;
    for (int i = 0; i < k; i++) pot *= p;
    for (int i = n; i > k; i--) pot *= (1-p); 
    cout << choose(n, k)*pot << endl;
}
