#include <iostream>
#include <map>
using namespace std;

int next_number(int x, int y, int n) {
	if (n%2 == 0) return n/2 + x;
	return 3*n + y;
}

int find_cycle(int x, int y, int n) {
	map<int, int> seq;
	seq[8] = 0;
	int next = next_number(x,y,n);
	int i = 1;
	while (seq[next] == 0 and next <= 1e6) {
		seq[next] = i;
		i++;
		next = next_number(x,y,next);
	}
	if (next > 1e6) return next;
	return i - seq[next];
}

int main() {
	int x, y, n;
	while (cin >> x >> y >> n) {
		cout << find_cycle(x,y,n) << endl;
	}
}
