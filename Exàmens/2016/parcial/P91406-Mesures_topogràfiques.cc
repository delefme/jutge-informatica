#include <iostream>
using namespace std;

void escriu_pedra_neu(int a, int b) {
	for (int i = 0; i < a; i++) cout << "X";
	for (int i = 0; i < b; i++) cout << ".";
	cout << endl;
}

int main() {
	bool stop = false;
	int pedra = 0;
	int neu = 0;
	int inc_pedra, inc_neu;
	while (not stop and cin >> inc_pedra >> inc_neu) {
		pedra = pedra + inc_pedra;
		neu = neu + inc_neu;
		if (neu < 0 or pedra < 0) {
			cout << "ERROR" << endl;
			stop = true;
		} 
		else escriu_pedra_neu(pedra, neu);
	}
}

