#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int factor = 1;
		int freq = 1;
		for (int i = 2; i*i <= n; i++) {
			int compt = 0;
			while (n%i == 0) {
				n /= i;
				compt++;
			} 
			if (compt >= freq) {
				freq = compt;
				factor = i;
			}
		}
		if (n != 1 and freq == 1) factor = n;
		cout << factor << ' ' << freq << endl;
	}
}
				
