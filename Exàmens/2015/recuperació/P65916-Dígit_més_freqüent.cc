#include <iostream>
#include <vector>
using namespace std;


void dig_freq(int n, int b) {
	vector<int> digits(b, 0);
	while (n != 0) {
		digits[n%b]++;
		n = n/b;
	}
	int max = 0;
	int maxdig;
	for (int i = 0; i < b; i++) {
		if (digits[i] >= max) {
			max = digits[i];
			maxdig = i;
		}
	}
	cout << maxdig << ' ' << max << endl;
}
	


int main() {
	int n, b;
	while (cin >> n >> b) dig_freq(n, b);
}
