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
    int pot = 1;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) pot *= 2;
    cout << double(choose(n, k))/pot << endl;
}
