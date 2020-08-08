#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 0;
	double j = 0;
	while (i <= n) {
		i = i+1;
		j = j + 1/i;
	}
	cout << j << endl;
}
