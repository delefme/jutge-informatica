#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main() {
	int n;
	while (cin >> n) {
		vector<int> sumafreq(n+1, 0);
		vector<string> entrada(n);
		for (int i = 0; i < n; i++) cin >> entrada[i];
		sort(entrada.begin(), entrada.end());
		for (int i = 0; i < n; i++) {
            int compt = 1;
            while (i < n-1 and entrada[i+1] == entrada[i]) {
                i++;
                compt++;
            }
            sumafreq[compt] += entrada[i].size();
		}
		for (int i = 0; i < n+1; i++) {
			if (sumafreq[i] != 0) {
				cout << i << " : " << sumafreq[i] << endl;
			}
		}
		cout << endl;
	}	   
}
			
