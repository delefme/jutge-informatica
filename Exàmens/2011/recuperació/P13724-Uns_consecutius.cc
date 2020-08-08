#include <iostream>
using namespace std;


int maxuns(int n) {
	int compt = 0;
	int max = 0;
	while (n != 0) {
		if (n%2 == 1) {
			compt++;
			if (max < compt) max = compt;
		}
		else compt = 0;
		n = n/2;
	}
	return max;
}


int main() {
	int n;
	while (cin >> n) {
		cout << maxuns(n) << endl;
	}
}
