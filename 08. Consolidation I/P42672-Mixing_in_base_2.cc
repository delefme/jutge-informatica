#include <iostream>
using namespace std;

void mixbinary(int n, int m) {
	if (n/2 != 0 and m/2 != 0) mixbinary(n/2, m/2);
    cout << (n%2) << (m%2);
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        mixbinary(n, m);
        cout << endl;
    }
}
