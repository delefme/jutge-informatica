#include <iostream>
#include <string>
using namespace std;

int roman(char c) {
	if (c == 'I') return 1;
	else if (c == 'V') return 5;
	else if (c == 'X') return 10;
	else if (c == 'L') return 50;
	else if (c == 'C') return 100;
	else if (c == 'D') return 500;
	else return 1000;
}

int main () {
	string num;
	int suma = 0;
	while (cin >> num) {
		int n = num.size();
		for (int i = 0; i < n-1; i++) {
			if (num[i+1] == '.') suma += roman(num[i]);
			else {
				if (roman(num[i+1]) > roman(num[i])) {
					suma += roman(num[i+1]) - roman(num[i]);
					i++;
				}
				else suma += roman(num[i]);
			}
		}
		num.pop_back();
		cout << num << " = " << suma << endl;
		suma = 0;
	}
}
	
