#include <iostream>
using namespace std;

bool is_prime(int n) {
    for (int i = 2; i*i <= n; i++) {
        if (n%i == 0) return false;
    }
    if (n == 0 or n == 1) return false;
    return true;
}

int largest_prime_factor(int n) {
    int max = 0;
    bool found = false;
    for (int i = 2; i*i <= n; i++) {
        while (n%i == 0) {
            n = n/i;
            if (n > max and is_prime(n)) max = n;
            else if (i > max and is_prime(i)) max = i;
            found = true;
        }
    }
    if (found) return max;
    return n;
}
int main() {
  int n;
  while (cin >> n) cout << largest_prime_factor(n) << endl;
}
