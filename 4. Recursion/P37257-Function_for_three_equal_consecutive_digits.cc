#include <iostream>
using namespace std;


bool three_equal_consecutive_digits(int n, int b) {
    if (n == 0) return false;
    if (n%b == (n/b)%b and n%b == (n/(b*b))%b) return true;
    return three_equal_consecutive_digits(n/(b), b);
}
int main() {
  int n, b;
  while (cin >> n >> b)
    cout << n << ' ' << b << ' ' << three_equal_consecutive_digits(n, b) << endl;
}
