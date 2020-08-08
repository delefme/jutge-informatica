#include <iostream>
using namespace std;

int sum_of_digits(int x){
    if (x == 0) return 0;
    return (sum_of_digits(x/10) + x%10);
}
int reduction_of_digits(int n) {
    if (n/10 == 0) return n;
    return reduction_of_digits(sum_of_digits(n));
}
int main() {
  int n;
  while (cin >> n) {
    cout << reduction_of_digits(n) << endl;
  }
}
