#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (c == 59 and b == 59) {
		if ((a+1)%24 >= 10) cout << (a+1)%24 << ":" << "00" << ":" << "00" << endl;
		else cout << "0" << (a+1)%24 << ":" << "00" << ":" << "00" << endl;
	}
	else if  (c == 59) {
		if (a%24 >= 10 and (b+1) >= 10) cout << a%24 << ":" << (b+1) << ":" << "00" << endl;
		else if (a%24 < 10 and ((b+1)) < 10) cout << "0" << a%24 << ":" << "0" << (b+1) << ":" << "00" << endl;
		else if (a%24 < 10) cout << "0" << a%24 << ":" << (b+1) << ":" << "00" << endl;
		else cout << a%24 << ":" << "0" << (b+1) << ":" << "00" << endl;
	}
	else { 
		if ((a%24) >= 10 and (b) >= 10 and (c+1) >= 10) cout << a%24 << ":" << b << ":" << (c+1) << endl;
		else if ((a%24) < 10 and (b) < 10 and (c+1) < 10) cout << "0" << a%24 << ":" << "0" << b << ":" << "0" << (c+1) << endl;
		else if ((a%24) < 10 and (b) < 10) cout << "0" << a%24 << ":" << "0" << b << ":" << (c+1) << endl;
		else if ((a%24) < 10 and (c+1) < 10) cout << "0" << a%24 << ":" << b << ":" << "0" << (c+1) << endl;
		else if ((b) < 10 and (c+1) < 10) cout << a%24 << ":" << "0" << b << ":" << "0" << (c+1) << endl;
		else if ((a%24) < 10) cout << "0" << a%24 << ":" << (b) << ":" << (c+1) << endl;
		else if ((b) < 10) cout << a%24 << ":" << "0" << (b) << ":" << (c+1) << endl;
		else if ((c+1) < 10) cout << a%24 << ":" << (b) << ":" << "0" << (c+1) << endl;
	}
}
