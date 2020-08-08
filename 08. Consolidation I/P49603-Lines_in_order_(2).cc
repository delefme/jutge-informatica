#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string act;
    string ant;
    int aux = 0;
    int i = 0;
    while (cin >> n) {
        bool order = true;
        if (n > 0) {
            cin >> ant;
            for (int j = 0; j < n-1; j++) {
                cin >> act;
                if (act < ant) order = false;
                ant = act;
            }
        }
        i++;
        if (order) aux = i;
    }
    if (aux != 0) cout << "The last line in increasing order is " << aux << "." << endl;
    else cout << "There is no line in increasing order." << endl;
}
