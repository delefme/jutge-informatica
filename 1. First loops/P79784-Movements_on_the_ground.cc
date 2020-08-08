#include <iostream>
using namespace std;

int main() {
	char x;
	int a = 0;
	int b = 0;
	while (cin >> x) {
		if (x == 'n') a = a-1;
		if (x == 's') a = a+1;
		if (x == 'e') b = b+1;
		if (x == 'w') b = b-1;
}
	cout << "(" << b << ", " << a << ")" << endl;
}
