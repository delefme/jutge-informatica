#include <iostream>
using namespace std;

int max_books(int n, int p, int c) {
    return c/p; 
}

int min_books(int n, int p, int c) {
	while (n > 1) {
		c = c - (p-1); 
		n = n-1;
	}
	if (c < 0) return 0;
	return c/p; 
	
}

int main() {
    int n, p, c;
    while (cin >> n >> c >> p) {
		if (n == 0 or p == 0 or c == 0) return 0;
		int n2 = n;
		int p2 = p;
		int c2 = c;
		cout << min_books(n, p, c) << " " << max_books(n2, p2, c2) << endl;
	}
}

