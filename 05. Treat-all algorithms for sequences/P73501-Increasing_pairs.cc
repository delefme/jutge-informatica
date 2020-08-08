#include <iostream>
using namespace std;

int main() {
	int n;
    cin >> n;
	int x;
	int aux;
    for (int j = 0; j < n; j++) {
        int suma = 0;
        bool cosa = false;
        while (cin >> x and x != 0) {
            if (cosa) {
                if (aux < x) suma++;
            }
            aux = x;
            cosa = true;
        }
        cout << suma << endl;
    }
}
