#include <iostream>
using namespace std;


int main() {
    int a,b;
    int i = 1;
    while (cin >> a >> b) {
        int n;
        if (double(a)/b == a/b) n = a/b;
        else n = (a/b) + 1;
        cout << "#" << i << " : " << n*b << endl;
        i++;
    }
}
