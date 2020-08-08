#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct rectangle {
	int b, h;
	bool operator<(const rectangle& c) {
		if (b*h == c.b*c.h and 2*b + 2*h == 2*c.b + 2*c.h) return b < c.b;
		else if (b*h == c.b*c.h) return 2*b + 2*h > 2*c.b + 2*c.h;
		return b*h < c.b*c.h;
	}
};


int main() {
	int n;
	while (cin >> n) {
		vector<rectangle> v(n);
		for (int i = 0; i < n; i++) cin >> v[i].b >> v[i].h;
		sort(v.begin(), v.end());
		for (int i = 0; i < n; i++) {
			cout << v[i].b << ' ' << v[i].h << endl;
		}
		cout << "----------" << endl;
	}
}
