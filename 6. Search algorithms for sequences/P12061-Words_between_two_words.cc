#include <iostream>
#include <string>
using namespace std;

int main() {
    string par;
    int compt = 0;
    bool found = false;
    while (not found and cin >> par) {
        if (par == "beginning") {
            compt++;
            while (cin >> par and par != "end") compt++;
            if (par == "end") found = true;
        }
        if (par == "end") found = true;
            
    }
    if (not found or compt == 0) cout << "wrong sequence";
    else cout << (compt - 1);
    cout << endl;
}
