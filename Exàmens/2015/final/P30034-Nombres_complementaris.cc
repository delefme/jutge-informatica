#include <iostream>
using namespace std;


bool son_complementaris(int x, int y, int b) {
	int digx = 1;
	int auxx = x;
	while (auxx >= b) {auxx /= b; digx++;}
	int digy = 1;
	int auxy = y;
	while (auxy >= b) {auxy /= b; digy++;}
	if (digx != digy) return false;
	int suma = x+y;
	while (suma != 0) {
		if (suma%b != b-1) return false;
		suma /= b;
	}
	return true;
}
	


int main() {
  int x, y, b;
  while (cin >> x >> y >> b) cout << son_complementaris(x, y, b) << endl;
}
