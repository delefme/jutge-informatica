#include <iostream>
using namespace std;

int factorial(double n) {
    int i = 0;
    int j = 1;
    while (i < n) {
        i = i+1;
        j = j*i;
    }
    return j;
}


int main() {
    cout.setf(ios::fixed);
    cout.precision(10);
    double n;
    while (cin >> n) {
        double suma = 0.000000000;
        double fact = factorial(n-1);
        double prod = 1.0000000000;
        for (double i = 1.0000000000; i <= n - 1; i++) {
            prod *= i;
            suma += fact/prod;
        }
        double e = 1.00000000000 + double(suma)/double(fact);
        if (n == 0) e = 0;
        cout << "With " << (int)n << " term(s) we get " << e << "." << endl;
    }
}
