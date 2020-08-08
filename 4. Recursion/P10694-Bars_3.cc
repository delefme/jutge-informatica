#include <iostream>
using namespace std;

void asteriscs(int n) {
    for (int i = 0; i < n; i++) cout << "*";
    cout << endl;
}

void bars3(int n) {
    if (n == 1) cout << "*" << endl;
    else {
        bars3(n-1);
        bars3(n-1);
        asteriscs(n);
    }
}
int main() {
    int n;
    cin >> n;
    bars3(n);
}
