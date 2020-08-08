#include <iostream>
using namespace std;

int main() {
	int x;
	int i;
	cin >> i;
	int j = 1;
	int aux = 0 ;
	bool incorrect = true;
	while (cin >> x and x != -1) {
		if (j == i) {
			aux = x;
			incorrect = false;
		}
		j++;
	}
	if (not incorrect) cout << "At the position " << i << " there is a(n) " << aux << ".";
	else cout << "Incorrect position.";
	cout << endl;
}
