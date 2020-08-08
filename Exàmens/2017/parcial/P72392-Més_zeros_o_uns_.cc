#include <iostream>
using namespace std;


int zeros_o_uns(int n) {
	int i = 0;
	while (n != 0) {
		if (n%2 == 1) i++;
		if (n%2 == 0) i--;
		n = n/2;
	}
	if (i < 0) return 0;
	else if (i > 0) return 1;
	else return 2;
}


int main() {
  int n;
  while (cin >> n) cout << zeros_o_uns(n) << endl;
}
