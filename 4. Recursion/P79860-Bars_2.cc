#include <iostream>
using namespace std;

void asteriscs(int n) {
    for (int i = 0; i < n; i++) cout << "*";
    cout << endl;
}

void bars2(int n) {
    if (n == 1) cout << "*" << endl;
    else {
        asteriscs(n);
        bars2(n-1);
        bars2(n-1);
    }
}
int main() {
    int n;
    cin >> n;
    bars2(n);
}
