#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		vector<int> v(n);
		for (int i = 0; i < n; i++) cin >> v[i];
		int i = 0;
		int j = n-1;
		int sumai = v[i];
		int sumaj = v[j];
		while (sumai != sumaj) {
			if (sumai > sumaj) {
				j--;
				sumaj += v[j];
			}
			else if (sumai < sumaj) {
				i++;
				sumai += v[i];
			}
		}
		cout << i+1 << endl;
	}
}
			
