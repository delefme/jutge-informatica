#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	while (cin >> a >> b >> c >> d) {
		for (int k = 0; k <= d; k++) {
			int x = a*k*k + b*k + c;
			for (int i = 0; i < x; i++) cout << "X";
			cout << endl;
		}
		cout << "----------" << endl;
	}	
}
