#include <iostream>
#include <cmath>
using namespace std;



int main() {
    int a, b, c, d;
    while (cin >> a >> b >> c >> d) {
		int compt = 0;
		for (int i = a; i <= b; i++) { 
			for (int j = c; j <= d; j++) {
				if (sqrt(i*i + j*j) == (int)(sqrt(i*i +  j*j))) compt++;
			}
		}
		cout << compt << endl;
	}
}
