#include <iostream>
using namespace std;


void count_and_add(int& num, int& sum) {
	sum = 0;
	num = 0;
	int x;
	while (cin >> x) {
		++num;
		sum = sum + x;
	}
}


int main() {
  int num = -1;
  int sum = -33;
  count_and_add(num, sum);
  cout << num << ' ' << sum << endl;
}
