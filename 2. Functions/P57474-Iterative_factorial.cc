#include <iostream>
using namespace std;

int factorial(int n) {
    int i = 0;
    int j = 1;
    while (i < n) {
        i = i+1;
        j = j*i;
    }
    return j;
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n) << endl;
}
