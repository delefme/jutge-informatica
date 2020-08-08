#include <iostream>
using namespace std;


bool es_xupiguai(int n, int b) {
	int i = 0;
	while (n != 0) {
		if (i%2 == 1) {
			if (n%b >= b/2) return false;
		}
		else {
			if (n%b < b/2) return false;
		}
		n = n/b;
		i++;
	}
	return true;
}


int main() {
  int n, b;
  while (cin >> n >> b) cout << es_xupiguai(n, b) << endl;
}
