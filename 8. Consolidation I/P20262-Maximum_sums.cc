#include <iostream>
using namespace std;

int main() {
	int n, m;
	while(cin >> n) {
		int sumatot = 0;
		int left = 0;
		int min = 0;
		for (int i = 0; i < n; i++) {
			cin >> m;
			sumatot += m;
			if (sumatot > left) left = sumatot;
			if (sumatot < min) min = sumatot;
		}
		cout << left << " " << sumatot - min << endl;
	}
}
