#include <iostream>
#include <vector>
using namespace std;


int main() {
    int llargada;
    cin >> llargada;
    int actual;
    vector<int> comptador(1001, 0);
    for (int i = 0; i < llargada; i++) {
        cin >> actual;
        comptador[actual-1000000000]++;
    }
    for (int i = 0; i < 1001; i++) {
        if (comptador[i] != 0) {
            cout << 1000000000+i << " : " << comptador[i];
            cout << endl;
         }
    }
}
