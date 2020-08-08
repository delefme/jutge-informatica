#include <iostream>
using namespace std;


int main() {
	int n, b;
	cin >> n >> b;
	cout << "----------" << endl;
	while (n != 0) {
		for (int i = 0; i < n%b; i++) cout << 'X';
		cout << endl;
		n = n/b;
	}
	cout << "----------" << endl;
}
