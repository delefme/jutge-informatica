#include <iostream>
#include <string>
using namespace std;

int main() {
	string par;
	string max2;
	string max;
	cin >> max;
	cin >> max2;
	while (max2 == max) {
		cin >> max2;
	}
	if (max2 > max) {
		par = max;
		max = max2;
		max2 = par;
	}
	while (cin >> par) {
		if (par < max) {
			if (par > max2) {
				max2 = par;
			}
		}
		else if (par != max) {
			max2 = max;
			max = par;
		}
	}
	cout << max2 << endl;
}
