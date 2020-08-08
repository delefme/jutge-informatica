#include <iostream>
using namespace std;

bool is_leap_year(int year) {
    if (year%100 == 0) {
            if ((year/100)%4 == 0) return true;
            return false;
	}
	else {
		if (year%4 == 0) return true;
		return false;
	}
}

int main() {
    int a;
    cin >> a;
    cout << is_leap_year(a) << endl;
}
