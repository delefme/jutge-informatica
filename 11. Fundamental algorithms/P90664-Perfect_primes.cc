#include <iostream>
using namespace std;

int sum_of_digits(int x){
    if (x == 0) return 0;
    return (sum_of_digits(x/10) + x%10);
}

bool is_prime(int n) {
for (int i = 2; i*i <= n; i++) {
if (n%i == 0) return false;
}
    if (n == 0 or n == 1) return false;
    return true;
}

bool is_perfect_prime(int n) {
	if (n == 2 or n == 3 or n == 5 or n == 7) return true;
	if (n == 0 or n == 4 or n == 6 or n == 8 or n == 9 or n == 1) return false;
	if (is_perfect_prime(sum_of_digits(n)) and is_prime(n)) return true;
	return false;
	
}

int main() {
    int n;
    while (cin >> n and n != 0) {
        if (is_perfect_prime(n)) cout << "yes";
        else cout << "no";
        cout << endl;
    }
}
