#include <iostream>
using namespace std;

int proddig(int n) {
	if (n/10 == 0) return n;
	return (n%10)*proddig(n/10);
}


bool dig_consec(int n) {
	while (n/10 != 0) {
		if (n%10 == (n/10)%10) return true;
		n = n/10;
	}
	return false;
}
bool es_bufo(int n) {
	if (dig_consec(n)) return false;
	int aux = n;
	n = proddig(n);	
	while (aux != n) {
		if (dig_consec(n)) return false;
		aux = n;
		n = proddig(n);
	}
	return true;
}
	


int main() {
  int n;
  while (cin >> n) cout << es_bufo(n) << endl;
}

