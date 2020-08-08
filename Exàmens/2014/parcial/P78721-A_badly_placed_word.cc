#include <iostream>
using namespace std;


void swap(string& a, string& b) {
	string aux = a;
	a = b;
	b = aux;
}

int main() {
	string actual, next;
	cin >> actual >> next;
	if (next < actual) swap(next, actual);
	cout << actual << endl;
	actual = next;
	while (cin >> next and next != "END") {
		if (next < actual) swap(next, actual);
		cout << actual << endl;
		actual = next;
	}
	cout << actual << endl;
}
			
