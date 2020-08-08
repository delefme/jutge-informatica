#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	cout << "Banknotes of 500 euros: " << a/500 << endl << "Banknotes of 200 euros: " << a%500/200 << endl << "Banknotes of 100 euros: " << a%500%200/100 << endl << "Banknotes of 50 euros: " << a%500%200%100/50 << endl <<  "Banknotes of 20 euros: " << a%500%200%100%50/20 << endl << "Banknotes of 10 euros: " << a%500%200%100%50%20/10 << endl << "Banknotes of 5 euros: " << a%500%200%100%50%20%10/5 << endl << "Coins of 2 euros: " << a%500%200%100%50%20%10%5/2 << endl << "Coins of 1 euro: " << a%500%200%100%50%20%10%5%2/1 << endl << "Coins of 50 cents: " << b/50 << endl << "Coins of 20 cents: " << b%50/20 << endl << "Coins of 10 cents: " << b%50%20/10 << endl << "Coins of 5 cents: " << b%50%20%10/5 << endl << "Coins of 2 cents: " << b%50%20%10%5/2 << endl << "Coins of 1 cent: " << b%50%20%10%5%2 << endl;
	
}
