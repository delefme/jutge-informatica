#include <iostream>
using namespace std;

int main() {
    char c; 
    cin >> c;
    bool hello = false;
    while (c != '.') {
        if (c == 'h') {
            cin >> c;
            if (c == 'e') {
                cin >> c;
                if (c == 'l') {
                    cin >> c;
                    if (c == 'l') {
                        cin >> c;
                        if (c == 'o') hello = true;
                    }
                }
            }
        }
        else cin >> c;
    }
    if (hello) cout << "hello";
    else cout << "bye";
    cout << endl;
}
