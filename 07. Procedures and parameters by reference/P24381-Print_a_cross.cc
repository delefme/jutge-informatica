#include <iostream>
using namespace std;


void cross(int n, char c) {
	for (int i = 0; i < (n-1)/2; i++) {
		for (int j = 0; j < (n-1)/2; j++) cout << " ";
		cout << c << endl;
	}
	for (int j = 0; j < n; j++) cout << c;
	cout << endl;
	for (int i = 0; i < (n-1)/2; i++) {
		for (int j = 0; j < (n-1)/2; j++) cout << " ";
		cout << c << endl;
	}
}

int main() {
  int n;
  char c;
  while (cin >> n >> c) cross(n, c);
}
