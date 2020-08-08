#include <iostream>
using namespace std;

int main() {
	int h, m, t;	
	while (cin >> h >> m >> t) {
		int campanades = 0;
		campanades += 22*(t/1440);
		t = t%1440;
		h = h%12;
		while (t > 0) {
			t--;
			m = (m+1)%60;
			if (m == 0) h = (h+1)%12;
			if (h == 0 and m == 1) campanades++;
			else if (h == 1 and m == 6) campanades++;
			else if (h == 2 and m == 11) campanades++;
			else if (h == 3 and m == 17) campanades++;
			else if (h == 4 and m == 22) campanades++;
			else if (h == 5 and m == 28) campanades++;
			else if (h == 6 and m == 33) campanades++;
			else if (h == 7 and m == 39) campanades++;
			else if (h == 8 and m == 44) campanades++;
			else if (h == 9 and m == 50) campanades++;
			else if (h == 10 and m == 55) campanades++;
			//cout << h << endl << m << endl << campanades << endl;
		}
		cout << campanades << endl;
	}
}
