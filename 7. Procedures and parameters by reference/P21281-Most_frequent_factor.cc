#include <iostream>
using namespace std;


void factor(int n, int& f, int& q) {
    int i = 2;
    q = 1;
    f = n;
    while (i*i <= n) {
        int j = 0;
        while (n%i == 0 and n != 0) {
            j++;
            n = n/i;
        }
        if (j > q or (j == q and f > i)) {
            q = j;
            f = i;
        }
        i++;
    }
}

int main() {
  int n;
  while (cin >> n) {
    int f = -1, q = 1000;
    factor(n, f, q);
    cout << f << ' ' << q << endl;
  }
}
