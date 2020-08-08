#include <iostream>
using namespace std;

int power(int b, int e) {
		int i = 0;
		int p = 1;
		while (e > i) {
			i = i+1;
			p = b*p;
		}
		return p;
}

int main() {
	int a,b;
	while (cin >> a >> b) {
		cout << power(a,b) << endl;
	}
}
