#include <iostream>
using namespace std;


int sumdig(int n) {
	int suma = 0;
    while (n > 0) {
        suma = suma + n%10;
        n = n/10;
	}
	return suma;
}

int seq(int n, int j) {
	while (j < n) {
		j += sumdig(j);
	}
	return j;
}

int trobada_de_rius (int n) {
	bool found = false;
	int i = 1;
	int j = 3;
	int k = 9;
	while (not found) {
		while (i < n) {
			i += sumdig(i);
		}
		if (i == n) return i;
		while (j < n) {
			j += sumdig(j);
		}
		if (j == n) return j;
		while (k < n) {
			k += sumdig(k);
		}
		if (k == n) return k;
		n += sumdig(n);
	}
}
	

int main ()
{
    int n;
    while (cin >> n) {
        cout << n << " " << trobada_de_rius(n) << endl;
    }
}
