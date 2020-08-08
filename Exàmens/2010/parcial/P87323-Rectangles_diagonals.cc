#include <iostream>
using namespace std;



int main() {
	int f, c;
	cin >> f >> c;
	for (int i = 0; i < f; i++) {
		int out = i%10;
		int j = 0;
		while (j < c) {
			cout << out;
			if (j < i) {
				if (out == 0) out = 10;
				out--;
			}
			else {
				if (out == 9) out = -1;
				out++;
			}
			j++;
		}
		cout << endl;
	}
}
		
