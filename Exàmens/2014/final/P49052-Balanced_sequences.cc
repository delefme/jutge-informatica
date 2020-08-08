#include <iostream>
#include <vector>
using namespace std;


bool is_balanced(const vector<int>& seq, int left, int right) {
	if (right-left > 2) {
		int m = (right+left)/2;
		if ((right+left)%2 == 1) m++;
		int sumaleft = 0;
		for (int i = left; i < m; i++) sumaleft += seq[i];
		int sumaright = 0;
		for (int i = m; i < right; i++) sumaright += seq[i];
		if (sumaleft == sumaright and is_balanced(seq, left, m) and is_balanced(seq, m, right)) return true;
		return false;
	}
	return true;
}

int main() {
	int n;
	while (cin >> n) {
		vector<int> seq(n);
		for (int i = 0; i < n; i++) cin >> seq[i];
		if (is_balanced(seq, 0, n)) cout << "yes";
		else cout << "no";
		cout << endl;
	}
}
