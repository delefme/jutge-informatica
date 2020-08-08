#include <iostream>
#include <vector>
using namespace std;


int main() {
	int n;
	int nombre;
	cin >> n;
	vector<int> llista(n);
	vector<int> diferents;
	int nombre_diferents = diferents.size();
	vector<int> ordenats;
	for (int l = 0; l < n; l++) {
		cin >> nombre;
		nombre = nombre%1000000000;
		llista[l] = nombre;
	}
	for (int i = 0; i < n; i++) {
		bool nou_vector = false;
		for (int j = 0; j < nombre_diferents; j++) {
			if (llista[i] == diferents[j]) nou_vector = true;
		}
		if (nou_vector) {
				bool para = false;
				int j = 0;
				while (j < nombre_diferents and not para) {
					if (diferents[j] > llista[i]) {
						para = true;
						for (int l = nombre_diferents; l > j+1; l--) {
							if (l != nombre_diferents) {
								diferents.push_back(diferents[nombre_diferents]);
							}
							else {
								diferents[l] = diferents[l-1];
							}				
						}
						diferents[j+1] = llista[i];
					}
				}					 
			if (not para) diferents.push_back(llista[i]);
			nombre_diferents++;
		}
		else if (i == 1) diferents.push_back(llista[i]);
	}
	vector<int> comptador(nombre_diferents);
	for (int j = 0; j < nombre_diferents; j++) {
		for (int i = 0; i < n; i++) {
			if (llista[i] == diferents[j]) comptador[j]++;
		}
	}
	
	for (int i = 0; i < nombre_diferents; i++) {
		cout << 1000000 << diferents[i] << " : " << comptador[i] << endl;
	}
}
