#include <iostream>
using namespace std;

void digits_maxims(int n, int b, int& mx1, int& mx2) {
    mx1 = -1;     //inicialitzem a un nombre negatiu ja que així ens guardarà els dos primers
    mx2 = -1;
    while (n != 0) {
        if (n%b > mx1) {     
            mx2 = mx1;       
            mx1 = n%b;
        }
        else if (n%b < mx1 and n%b > mx2) mx2 = n%b;
        n = n/b;
    }
}

int main() {
  int n, b;
  while (cin >> n >> b) {
    int mx1, mx2;
    digits_maxims(n, b, mx1, mx2);
    cout << mx1 << ' ' << mx2 << endl;
  }
}
