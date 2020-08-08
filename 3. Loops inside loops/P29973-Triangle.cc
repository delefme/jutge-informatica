#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	string x = "*";
	int i = 1;
	while (i <= n) {
		cout << x << endl;
		x = x + "*";
		i = i+1;
	}
}
