#include <iostream>
#include <vector>
#include <string>
using namespace std;

using pila = vector<string>;
using biblio = vector<pila>;

// Pre: N de llibres és múltiple de n.
// 2 <= n <= 10
// no títols repetits.

bool esquizo(biblio& b, int n, int r){
	bool berga = true; 
	for(int i = 0; i < n; ++i){
		if(r != int(b[i].size())) berga = false;
	}
	if(berga) return true;
	// mirem el màxim
	int maxcompt = 0;
	for(int i = 1; i < n; ++i){
		if(b[i].size() > b[maxcompt].size()) maxcompt = i;
		else if(b[i].size() == b[maxcompt].size() and b[maxcompt].size() != 0) {
			if(b[i][b[i].size()-1] < b[maxcompt][b[maxcompt].size()-1]) maxcompt = i;
		}
	}
	
	
	//mirem el mínim
	int mincompt = 0;
	for(int i=0; i < n; ++i){
		if(b[i].size() < b[mincompt].size()) mincompt = i;
	}
		
	string canvi = b[maxcompt][b[maxcompt].size() - 1];
	
	b[maxcompt].pop_back();
	
	b[mincompt].push_back(canvi);
	
	return false;
}


int main() {
	int n;
	while(cin >> n){
		biblio b;
		int a;
		int num_llibres = 0;
		for(int k = 0; k < n; ++k){
				cin >> a;
				pila p(a);
				num_llibres += a;
				for(int j = 0; j < a; j++){
					cin >> p[j];
					
				}
				b.push_back(p);
		}
		int per = 1;
		int r = num_llibres/n;
		while(not esquizo(b,n,r)) per++;
		for(int i = 0; i < n; ++i) {
			for(int j = r-1; j >= 0; j--){
				if (j != r-1) cout << ' ';
				cout << b[i][j];
			}
			cout << endl;
		}
		cout << endl;
	}
}
