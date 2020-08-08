#include <iostream>
using namespace std ;

int main() {
	int a;
	cin >> a;
	if (a <= 0) cout << "it's cold" << endl << "water would freeze" << endl;
	else if (0 < a and a < 10) cout << "it's cold" << endl;
	else if (10 <= a and a <= 30) cout << "it's ok" << endl;
	else if (30 < a and a < 100) cout << "it's hot" << endl;
	else cout << "it's hot" << endl << "water would boil" << endl; 
}
