#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long int n;
	while (cin >> n) {
		long int i = (-1 + int(sqrt(1 + 8*n)))/2;
		if (i*(i+1)/2 < n) i++;
		cout << i*(i+1)/2 << endl;		
	}
}
