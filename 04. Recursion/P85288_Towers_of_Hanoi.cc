#include <iostream>
using namespace std;

void hanoi(int n, char inici, char fi, char auxiliar) {
	if (n > 0) {
        hanoi (n-1, inici, auxiliar, fi);
        cout << inici << " => " << fi << endl;
        hanoi (n-1, auxiliar, fi, inici);
	}
}

int main() {
	int n;
	cin >> n;
	char inici = 'A';
	char fi = 'C';
	char auxiliar = 'B';
	hanoi(n, inici, fi, auxiliar);
}
