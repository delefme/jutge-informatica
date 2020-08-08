#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    bool found = false;
    string act;
    string ant;
    int i = 0;
    while (cin >> n and not found) {
        cin >> ant;
        bool order = true;
        for (int j = 0; j < n-1; j++) {
            cin >> act;
            if (act < ant) order = false;
            ant = act;
        }
        found = order;
        i++;
    }
    while (cin >> n) {
        for (int j = 0; j < n; j++) cin >> act;
    }
    if (found) cout << "The first line in increasing order is " << i << "." << endl;
    else cout << "There is no line in increasing order." << endl;
}
