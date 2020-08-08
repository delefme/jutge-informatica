#include <iostream>
using namespace std;

void pas(int& act, int& seg) {
	int a = seg;
	seg += act;
	act = a;
}


bool ok(int n) {
	int act = 1;
	int seg = 2;
	while (n != 0 and n != act) {
		if (n < act) cin >> n;
		else pas(act, seg);
	}
	if (n == 0) return false;
	
	while (n != 0 and n <= act) {
		if (n < act) cin >> n;
		else pas(act, seg);
	}
	
	if (n == 0) return true;
	
	bool ind = true;
	
	while (n != 0) {
		if (n < act) cin >> n;
		else {
			if (n == act) ind = false;
			pas(act, seg);
		}
	}
	return ind;
}

int main() {
	int n;
	while (cin >> n) {
		if (ok(n)) cout << "yes";
		else cout << "no";
		cout << endl;
	}
}
			
		
