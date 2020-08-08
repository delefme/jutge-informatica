#include <iostream>
using namespace std;

int max3 (int a, int b, int c) {
	if (a <= c and b <= c) return c;
    else if (c <= b and a <= b) return b;
    return a;
}

int rec() {
	char c;
	cin >> c;
	if (c == '-') return -rec();
	else if (c == '+') return rec()+rec();
	else if (c == 'm') return max3(rec(), rec(), rec());
	return int(c - '0');
}



int main() {
	cout << rec() << endl;
}
