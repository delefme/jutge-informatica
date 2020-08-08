#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int aux = n;
    int aux2 = 2*n -1;
    int z = n;
    int j = 1;
    while (j < z) {  //escriu el triangle superior
        int i = 1;
        while (i < aux) {
            cout << " ";
            i = i+1;
        }
        int k = 0;
        while (k < 2*j - 1) {
            cout << "*";
            k = k+1;
        }
        cout << endl;
        j = j+1;
        aux = aux - 1;
    }
    int c = 0;
    while (c < z) {
		int i = 0;
		while (i < c) {
			cout << " ";
			i = i+1;
		}
		int k = 0;
		while (k < aux2) {
			cout << "*";
			k = k+1;
		}
		cout << endl;
		c = c+1;
		aux2 = aux2 - 2;
	}
}
