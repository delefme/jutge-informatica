#include <iostream>
#include <vector>
using namespace std;


vector<int> merge(const vector<int> & V1, const vector<int> & V2) {
    int v1 = V1.size();
    int v2 = V2.size();
    vector<int> A(0);
    int i = 0;
    int j = 0;
    while (j < v2 and i < v1) {
        if (V1[i] > V2[j]) {
            A.push_back(V2[j]);
            j++;
        }
        else {
            A.push_back(V1[i]);
            i++;
        }
    }
    while (j < v2) {
        A.push_back(V2[j]);
        j++;
    }
    while (i < v1) {
        A.push_back(V1[i]);
        i++;
    }
    return A;
}


int main() {
	int n1, n2;
	while (cin >> n1) {
		vector<int> v1(n1);
		for (int i = 0; i < n1; i++) cin >> v1[i];
		cin >> n2;
		vector<int> v2(n2);
		for (int i = 0; i < n2; i++) cin >> v2[i];
		vector<int> tot = merge(v1, v2);
		int max = 0;
		int par;
		for (int i = 0; i < n1+n2; i++) {
            int compt = 1;
            while (i < (n1+n2)-1 and tot[i+1] == tot[i]) {
                i++;
                compt++;
            }
            if (max <= compt) {
                max = compt;
                par = tot[i];
            }
        }
        cout << par << ' ' << max << endl;
	}
}

