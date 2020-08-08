#include <iostream>
#include <cmath>
using namespace std;

bool is_perfect(int n) {
	if (n == 1) return false;
	int i = 2;
	int suma = 1;
	while (i < sqrt(n)) {
		if (suma > n) return false;
		if (n%i == 0) {
			suma = suma + i + n/i;
		}
		i = i+1;
	}
	if (n == suma) return true;
	else return false;
}

int main() {
	int n;
	cin >> n;
	cout << is_perfect(n) << endl;
}	
