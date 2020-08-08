#include <iostream>
using namespace std; 

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    double suma = 0;
    double x;
    int i = 0;
    while(cin >> x) {
    suma = suma + x;
    i = i+1;
	}
    cout << suma/i << endl;
}

