#include <iostream>
using namespace std;


bool es_prim(int n, int b) {
	if (n < b) return (n < b/2);
	if (n%b < b/2) return es_prim(n/b, b);
	return false;
}
	


int main() {
  int n, b;
  while (cin >> n >> b) cout << es_prim(n, b) << endl;
}
