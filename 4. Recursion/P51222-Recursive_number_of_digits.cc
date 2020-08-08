#include <iostream>
using namespace std;


int number_of_digits(int n){
    if (n/10 == 0) return 1;
    return number_of_digits(n/10)+1;
}
int main () {
  int n;
  while (cin >> n) cout << number_of_digits(n) << endl;
}

