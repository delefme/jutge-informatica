#include <iostream>
#include <cmath>
using namespace std;



int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int i = a;
    int aux;
    bool found = false;
    while (not found and i <= b) {
        int j = c;
        while (not found and j <= d) {
            if (sqrt(i*i + j*j) == (int)(sqrt(i*i +  j*j))) {
                found = true;
                aux = j;
            }
            ++j;
        }
        ++i;
    }
    --i;
    if (found) cout << i << "^2 + " << aux << "^2 = " << sqrt(i*i + aux*aux) << "^2" << endl;
    else cout << "No solution!" << endl;
}
