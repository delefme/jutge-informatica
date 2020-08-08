#include <iostream>
#include <vector>
using namespace std;


vector<string> ordena_sense_sort(const vector<string>& V) {
	int n = V.size();
	vector<string> ordenat(n);
	vector < vector<string> > llargades_min(11);
	vector< vector<string> > llargades_maj(11);
	
	for (int j = 1; j <= 10; j++) {
		for (int i = 0; i < n; i++) {
			if (int(V[i].size()) == j and V[i][0] >= 'a' and V[i][0] <= 'z') llargades_min[j].push_back(V[i]);
		} 
	}
	for (int j = 1; j <= 10; j++) {
		for (int i = 0; i < n; i++) {
			if (int(V[i].size()) == j and V[i][0] >= 'A' and V[i][0] <= 'Z') llargades_maj[j].push_back(V[i]);
		} 
	}
	int index = 0;
	for (auto v : llargades_min) {
		for (auto s : v) {
			ordenat[index] = s;
			index++;
		}
	}
	for (auto v : llargades_maj) {
		for (auto s : v) {
			ordenat[index] = s;
			index++;
		}
	}
	return ordenat;
}


int main() {
	int n;
	cin >> n;
	vector<string> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	vector<string> res = ordena_sense_sort(v);
	for (string a : res) cout << a << ' ';
	cout << endl;
}
