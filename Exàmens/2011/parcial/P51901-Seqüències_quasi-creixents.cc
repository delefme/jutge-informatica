#include <iostream>
using namespace std;



int main() {
	int n;
	while (cin >> n and n != 0) {
		if (n == 2) {
			cout << 2;
			int a, b; cin >> a >> b;
		}
		else {
			int act, next1, next2;
			cin >> act >> next1 >> next2;
			int compt = 0;
			int maxcompt = 2;
			if (act < next1 or act < next2) {
				maxcompt = 3;
				compt = 1;
			}
			act = next1;
			next1 = next2;
			for (int i = 3; i < n; i++) {
				cin >> next2;
				if (act < next1 or act < next2) {
					compt++;
					if (compt+2 > maxcompt) maxcompt = compt+2;
				}
				else if (act >= next1 or act >= next2) {
					if (compt > maxcompt) maxcompt = compt;
					compt = 0;
				}
				act = next1;
				next1 = next2;
			}
			cout << maxcompt;
		}
		cout << endl;
	}
}
			
