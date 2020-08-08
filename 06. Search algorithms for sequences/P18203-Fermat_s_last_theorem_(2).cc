#include <iostream>
#include <cmath>
using namespace std;



int main() {
    int a, b, c, d;
    int x, y, z;
    bool found = false;
    while (not found and cin >> a >> b >> c >> d) {
        if (0 >= a and 0 <= b) {
            if (0 >= c and 0 <= d) {
                x = 0;
                y = 0;
                z = 0;
                found = true;            
            }
            else {
                x = 0;
                y = c;
                z = c;
                found = true;
            }
        }
        else if (0 >= c and 0 <= d) {
            x = a;
            y = 0;
            z = a;
            found = true;
        }
    }
    if (found) cout << x << "^3 + " << y << "^3 = " << z << "^3" << endl;
    else cout << "No solution!" << endl;
}
