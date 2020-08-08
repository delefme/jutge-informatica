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



vector<int> v1difv2(const vector<int>& v1, const vector<int>& v2) {
	int i = 0;
	int j = 0;
	int n = v1.size();
	int m = v2.size();
	vector<int> dif(0);
	if (m == 0) {
		while (i < n) {
			if (i == 0 or v1[i-1] != v1[i]) {
				dif.push_back(v1[i]);
			}
			i++;
		}
	}
	else {
		while (i < n) {
			while(j < m-1 and v1[i] > v2[j]) {
				j++;
			}
			if (v1[i] != v2[j] and (i == 0 or v1[i-1] != v1[i])) {
				dif.push_back(v1[i]);
			}
			i++;
		}
	}
	return dif;
}

vector<int> ex_union(const vector<int>& v1, const vector<int>& v2) {
	vector<int> u1 = v1difv2(v1, v2);
	vector<int> u2 = v1difv2(v2, v1);
	return merge(u1, u2);
}
	

int main() {
  int n1;
  while (cin >> n1) {
    vector<int> V1(n1);
    for (int i = 0; i < n1; ++i) cin >> V1[i];
    int n2;
    cin >> n2;
    vector<int> V2(n2);
    for (int i = 0; i < n2; ++i) cin >> V2[i];

    vector<int> res = ex_union(V1, V2);
    int n3 = res.size();
    cout << n3 << endl;
    for (int i = 0; i < n3; ++i) cout << " " << res[i];
    cout << endl << endl;

    for (int r = 0; r < 200; ++r) {
      vector<int> res2 = ex_union(V1, V2);
      if (res2 != res) cout << "Resultats diferents amb la mateixa entrada!" << endl;
    }
  }
}
