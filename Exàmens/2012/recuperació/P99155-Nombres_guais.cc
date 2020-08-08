#include <iostream>
using namespace std;


bool es_guai(int n, int b) {
	while (n != 0) {
		if ((n%b)%2 == 1) return false;
		n = n/b;
	}
	return true;
}


int main() {
  int n, b;
  while (cin >> n >> b) cout << es_guai(n, b) << endl;
}
