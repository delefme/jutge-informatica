#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <=10) {
        cout << n << "*" << i << " = " << n*i << endl;
        i = i+1; 
    }
}
