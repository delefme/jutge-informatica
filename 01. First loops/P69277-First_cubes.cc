#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 0;
	while (i < n ) {
		cout << i*i*i << ",";
		i = i+1;
	}
	cout << n*n*n << endl;
 
}
