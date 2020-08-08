#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if ((a < c and b < c) or (c < a and d < a)) cout << "[]" << endl;
	else if ((a >= c and b <= d)) cout << "[" << a << "," << b << "]" << endl;
	else if ((c >= a and d <= b)) cout << "[" << c << "," << d << "]" << endl;
	else if ((a >= c and d <= b)) cout << "[" << a << "," << d << "]" << endl;
	else if ((a <= c and b <= d)) cout << "[" << c << "," << b << "]" << endl;

}
