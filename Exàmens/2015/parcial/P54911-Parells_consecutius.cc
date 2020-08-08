#include <iostream>
using namespace std;



int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int compt = 0;
		int ant, act, next;
		cin >> ant;
		if (ant != -1) {
			cin >> act;
			if (act != -1) {
				cin >> next;
				if (next != -1) {
					if (next < ant) compt++;
					ant = act;
					act = next;
					while (cin >> next and next != -1) {
						if (next < ant) {compt++;}							
						ant = act;
						act = next;
					}
				}
			}
		}
		cout << compt << endl;
	}
}
