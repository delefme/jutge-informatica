#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector <string> paraules(10);
    for (int k = 0; k < n; k++) {
        int aux = -1;
        for (int i = 0; i < 10; i++) cin >> paraules[i];
        for (int j = 0; j < 9; j++) {
            int ultima = paraules[j].size() - 1;
            if ((paraules[j])[ultima] != (paraules[j+1])[0]) {
                aux = j+1;
                j = 9;
            }
        }
        if (aux == -1) cout << "=";
        else {
            if (aux%2 == 0) cout << "B";
            else cout << "A";
        }
        cout << endl;
    }
}
