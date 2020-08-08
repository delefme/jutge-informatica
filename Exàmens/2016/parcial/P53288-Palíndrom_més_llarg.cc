#include <iostream>
using namespace std;


int numdig(int n, int b) {
	int compt = 1;
	while (n >= b) {
		n /= b;
		compt++;
	}
	return compt;
}

bool is_palindrom(int n, int b, int k, int l) {
	while (l > k) {
		int i = 0;
		int auxk = n;
		while (i < k) {auxk /= b; i++;}
		i = 0;
		int auxl = n;
		while (i < l) {auxl /= b; i++;}
		if (auxk%b != auxl%b) return false;
		k++; l--;
	}
	return true;
}
		



void palindrom_mes_llarg(int n, int b, int& i, int& j) {
	int maxseq = 0;
	int dig = numdig(n, b);
	i = 0;
	j = 0;
	for (int k = 0; k < dig; k++) {
		for (int l = dig-1; l >= k; l--) {
			if (is_palindrom(n, b, k, l) and l - k > maxseq) {
				i = l;
				j = k;
				maxseq = l-k;
			}
		}
	}
}


int main() {
  int n, b;
  while (cin >> n >> b) {
    int i, j;
    palindrom_mes_llarg(n, b, i, j);
    cout << i << ' ' << j << endl;
  }
}
