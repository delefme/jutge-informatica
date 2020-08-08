#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


string compta_digits(int n) {
	string codi;
	for (int i = 0; i < 10; i++) codi.push_back('0');
	if (n == 0) codi[0]++;
	while (n != 0) {
		codi[n%10]++;
		n = n/10;
	}
	return codi;
}


int main() {
	int n;
	while (cin >> n) {
		vector<int> entrada(n);
		vector<string> anagrames(n);
		int suma = n;
		for (int i = 0; i < n; i++) {
			cin >> entrada[i];
			anagrames[i] = compta_digits(entrada[i]);
		}
		sort(anagrames.begin(), anagrames.end());
		for (int i = 1; i < n; i++) {
			while (i < n and anagrames[i-1] == anagrames[i]) {
				i++;
				suma--;
			}
		}
		
		cout << suma << endl;
	}
}
		
