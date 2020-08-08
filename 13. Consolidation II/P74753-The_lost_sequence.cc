#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	vector<int> lostseq(45);
	lostseq[0] = -3;
	lostseq[1] = -1;
	lostseq[2] = 4;
	lostseq[3] = 8;
	lostseq[4] = 15;
	while (cin >> n) {
		for (int i = 5; i < n; i++) {
			lostseq[i] = lostseq[i-5] + lostseq[i-3] + lostseq[i-1];
		}
		for (int i = 0; i < n; i++) cout << lostseq[i] << ' ';
		cout << "..." << endl;
	}
}
