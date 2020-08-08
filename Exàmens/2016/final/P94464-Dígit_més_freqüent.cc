#include <iostream>
#include <vector>
using namespace std;

void comptadig(vector<int>& v, int n, int b) {
	if (n == 0) v[0]++;
	while (n != 0) {
		v[n%b]++;
		n = n/b;
	}
}


int main() {
	int n, b;
	cin >> b;
	vector<int> comptador(b, 0);
	while (cin >> n) comptadig(comptador, n, b);
	int max = -1;
	int maxdig = 0;
	for (int i = 0; i < b; i++) {
		if (comptador[i] > max) {
			maxdig = i;
			max = comptador[i];
		}
	}
	cout << maxdig << ' ' << comptador[maxdig] << endl;
}
