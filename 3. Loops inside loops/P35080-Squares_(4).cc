#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k = 0;
    int x = 0;
    while (k < n) {
        if (k == 0);
        else cout << endl; 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << x;
                x = x+1;
                if (x > 9) x = 0;
            }
            cout << endl;
        }
        x = 0;
        k = k+1;
    }
}
