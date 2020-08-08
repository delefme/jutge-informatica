#include <iostream>
using namespace std;

bool mediana(int n1, int n2, int n3, int n4, int n5) {
	int left = 0, right = 0;
	if (n1 < n3) left++;
	else right++;
	if (n2 < n3) left++;
	else right++;
	if (n4 < n3) left++;
	else right++;
	if (n5 < n3) left++;
	else right++;
	return (left == right);
}

int main() {
	int n1, n2, n3, n4, n5;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> n1 >> n2 >> n3 >> n4 >> n5;
		if (mediana(n1, n2, n3, n4, n5)) cout << n3 << endl;
		n1 = n2; n2 = n3; n3 = n4; n4 = n5;
		while (cin >> n5 and n5 != -1) {
			if (mediana(n1, n2, n3, n4, n5)) cout << n3 << endl;
			n1 = n2; n2 = n3; n3 = n4; n4 = n5;
		}
		cout << "-----" << endl;
	}
}
