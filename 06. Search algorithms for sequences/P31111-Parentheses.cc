#include <iostream>
using namespace std;


int main() {
	char x;
	int j = 0;
	bool trencar = true;
	while (cin >> x and trencar) {
		if (x == '(') j++;
		else j--;
		if (j < 0) trencar = false;
	}
	if (j == 0) cout << "yes";
	else if (j != 0) cout << "no";
	cout << endl;		
}
