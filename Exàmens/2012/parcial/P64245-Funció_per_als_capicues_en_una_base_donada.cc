#include <iostream>
using namespace std;


void base(int n, int b, string& s) {
	if (n != 0) {
		base(n/b, b, s);
		s += char(n%b);
	}
}


bool es_capicua(int n, int b) {
	string rev = "";
	int aux = n;
	while (aux != 0){
		rev += char(aux%b);
		aux = aux/b;
	}
	aux = n;
	string normal = "";
	base(n, b, normal);
	return (rev == normal);
}


int main() {
    int x, b;
    while (cin >> x >> b)
      cout << x << ' ' << b << ' ' << es_capicua(x, b) << endl;
}
