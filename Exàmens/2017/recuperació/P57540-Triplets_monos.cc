#include <iostream>
using namespace std;


bool es_mono(int x, int y, int z) {
	while (x != 0 or y != 0 or z != 0) {
		int ix = x%10;
		int iy = y%10;
		int iz = z%10;
		int sum = ix + iy +iz;
		if (sum - 2*iz != 0 and sum - 2*iy != 0 and sum - 2*ix != 0) return false;
		x = x/10;
		y = y/10;
		z = z/10;
	}
	return true;
}


int main() {
  int x, y, z;
  while (cin >> x >> y >> z) cout << es_mono(x, y, z) << endl;
}
