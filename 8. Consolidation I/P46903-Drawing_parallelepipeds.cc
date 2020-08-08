#include <iostream>
using namespace std;

void printb(int n) {
	for (int i = 0; i < n; i++) cout << '_';
}

void printspace(int n) {
	for (int i = 0; i < n; i++) cout << ' ';
}

int main() {
	int b, h, d;
	while (cin >> b >> h >> d) {
		printspace(d);
		printb(b+1);
		cout << endl;
		int j = 0;
		for (int i = d - 1; i > 0; i--) {
			printspace(i); 
			cout << '/';
			printspace(b);
			cout << '/';
			printspace(j);
			cout << '|' << endl;
			j++;
		}
		cout << '/';
		printb(b);
		cout << '/';
		printspace(j);
		cout << '|' << endl;
		for (int i = 0; i < h-d; i++) {
			cout << '|';
			printspace(b);
			cout << '|';
			printspace(d-1);
			cout << '|' << endl;
		}
		for (int i = d-1; i > 0; i--) {
			cout << '|'; 
			printspace(b);
			cout << '|';
			printspace(i);
			cout << '/' << endl;
		}
		cout << '|';
		printb(b);
		cout << "|/" << endl << endl;
	}
}


			
			
			
		
