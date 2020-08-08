#include <iostream>
using namespace std;

void bars(int n) {
    if (n == 1) cout << "*" << endl;
    else {
        bars(n-1);
        for (int i = 0; i < n; i++) cout << "*";
        cout << endl;
        bars(n-1);
    }
}
int main() {
    int n;
    cin >> n;
    bars(n);
}
