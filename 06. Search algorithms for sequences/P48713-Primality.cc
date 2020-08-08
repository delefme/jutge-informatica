#include <iostream>
using namespace std;

bool is_prime(int n) {
    for (int i = 2; i*i <= n; i++) {
		if (n%i == 0) return false;
    }
    if (n == 0 or n == 1) return false;
    return true;
}

int main() {
	int n;
	cin >> n;
	int x;
	for(int i = 0; i < n; i++) {
		if (cin >> x) {
			if (is_prime(x)) cout << x << " is prime";
			else cout << x << " is not prime";
			cout << endl;
		}
		else cout << "0 is not prime" << endl;
	}
}
