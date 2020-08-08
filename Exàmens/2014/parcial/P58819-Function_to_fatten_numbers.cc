#include <iostream>
using namespace std;


int fatten(int x) {
	int aux = x;
	int pot10 = 1;
	while (aux/10 != 0) {
		aux = aux/10;
		pot10 *= 10;
	}
	int max = aux;
	int fat = aux*pot10;
	pot10 /= 10;
	while (pot10 != 0) {
		if ((x/pot10)%10 > max) max = (x/pot10)%10;
		fat += pot10*max;
		pot10 /= 10;
	}
	return fat;
} 


int main() {
  int x;
  while (cin >> x) cout << fatten(x) << endl;
}
