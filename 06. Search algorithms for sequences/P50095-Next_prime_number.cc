#include <iostream>
using namespace std;

bool is_prime(int n) {
    for (int i = 2; i*i <= n; i++) {
		if (n%i == 0) return false;
    }
    if (n == 0 or n == 1) return false;
    return true;
}

int nextprime(int n) {
	int i = n+1;
	while (not is_prime(i)) i++;
    return i;
}

int main() {
	int x;
	while (cin >> x) {
		if (is_prime(x)) cout << nextprime(x) << endl;
	}
}

	
