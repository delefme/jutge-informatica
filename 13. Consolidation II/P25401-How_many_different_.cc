#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main() {
	int n;
	while (cin >> n) {
		vector<int> entrada(n);
		int ndif = n;
		for (int i = 0; i < n; i++) cin >> entrada[i];
		sort(entrada.begin(), entrada.end());
		for (int i = 0; i < n; i++) {
            int compt = 1;
            while (i < n-1 and entrada[i+1] == entrada[i]) {
                i++;
                compt++;
            }
            if (compt != 1) ndif -= compt - 1;
		}
		cout << ndif << endl;
	}	   
}
			
