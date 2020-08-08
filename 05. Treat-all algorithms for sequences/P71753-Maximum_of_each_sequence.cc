#include <iostream>
using namespace std;

int main() {
	int n;
	int x;
	int max;
	while (cin >> n) {
        for (int i = 0; i < n; i++) {
		    cin >> x;
		    if (i != 0) {
			    if (max < x) max = x;
		    }
		    else max = x;
	    }
	    cout << max << endl;
    }
}
