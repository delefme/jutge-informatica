#include <iostream>
#include <string>
using namespace std;

int main() {
	string par;
	string inici;
	cin >> inici;
	int compt = 1;
	int max = 1;
	while (cin >> par) {
		if (par == inici) compt++;
		else if (compt != 0) {
			compt = 0;
		}
		if (compt > max) max = compt;
	}
	cout << max << endl;
}
