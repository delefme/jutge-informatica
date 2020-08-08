#include <iostream>
using namespace std;


void swap2(int& a, int& b) {
	int aux = a;
	a = b;
	b = aux;
}

int main() {
    int x,y;
    while (cin >> x >> y) {
        swap2(x, y);
        cout << x << " " << y << endl;
    }
}
