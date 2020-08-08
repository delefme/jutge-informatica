#include <iostream>
#include <cmath>
using namespace std;

int sum_of_digits(int x){
    if (x == 0) return 0;
    return (sum_of_digits(x/10) + x%10);
}

bool is_prime(int n) {
	for (int i = 2; i*i <= n; i++) {
		if (n%i == 0) return false; 
	}
    return true;
}

bool is_perfect_prime(int n) {
    if (n == 2 or n == 3 or n == 5 or n == 7) return true;
    if (is_prime(n) == false) return false;
    if (n == 0 or n == 1) return false;
    return is_perfect_prime(sum_of_digits(n));
}


int main() {
    int n;
    while (cin >> n) cout << (is_perfect_prime(n) ? "true" : "false") << endl;
}
