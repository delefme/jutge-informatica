#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string seq;
	while (cin >> seq) {
		int n = int('z') - int('a') + 1;
		vector<int> compt(n, 0);
		int length = seq.size();
		for (int i = 0; i < length; i++) compt[seq[i] - int('a')]++;
		int max = 0;
		int max2 = 0;
		int lletra = 0;
		int aux = 0;
		for (int i = 0; i < n; i++) {
			if (compt[i] > max) {
				lletra = aux;
				max2 = max;
				max = compt[i];
				aux = i;
			}
			else if (compt[i] > max2) {
				max2 = compt[i];
				lletra = i;
			}
		}
		cout << char('a' + lletra) << endl;
	}
}
		
