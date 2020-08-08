#include <iostream>
using namespace std;

int main() {
	int n;
	int x;
	int max;
	while (cin >> n) {
		int suma = 0;
        for (int i = 0; i < n; i++) {
		    cin >> x;
		    suma = suma + x;
		    if (i != 0) {
			    if (max < x) max = x;
		    }
		    else max = x;
	    }
        if (suma - max == max) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
