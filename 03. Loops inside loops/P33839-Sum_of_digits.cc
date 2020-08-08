#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int aux = n;
        int suma = 0;
        while (n > 0) {
            suma = suma + n%10;
            n = n/10;
        }
        cout << "The sum of the digits of " << aux << " is " << suma << "." << endl;
    }
}
