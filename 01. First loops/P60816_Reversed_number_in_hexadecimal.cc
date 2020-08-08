#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n; 
	while (n >= 16) {
		if (n%16 == 10) cout << "A";
		else if (n%16 == 11) cout << "B";
		else if (n%16 == 12) cout << "C";
		else if (n%16 == 13) cout << "D";
		else if (n%16 == 14) cout << "E";
		else if (n%16 == 15) cout << "F";
		else cout << n%16;
		n = n/16;		
	}
	if (n%16 == 10) cout << "A" << endl;
	else if (n%16 == 11) cout << "B" << endl;
	else if (n%16 == 12) cout << "C" << endl;
	else if (n%16 == 13) cout << "D" << endl;
	else if (n%16 == 14) cout << "E" << endl;
	else if (n%16 == 15) cout << "F" << endl;
	else cout << n << endl;
}
