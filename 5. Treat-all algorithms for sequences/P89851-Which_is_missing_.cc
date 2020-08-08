#include <iostream>
using namespace std;

int main() {
	int n;
	int x;
	while (cin >> n) {
        int suma = 0;
        for (int i = 0; i < n-1; i++) {
		    cin >> x;
            suma = suma + x;
	    }
	    cout << ((n*(n+1))/2)-suma << endl;
    }
}
