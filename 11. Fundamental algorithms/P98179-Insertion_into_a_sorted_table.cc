#include <iostream>
#include <vector>
using namespace std;

void swap2(double& a, double& b) {
	double aux = a;
	a = b;
	b = aux;
}

void insert(vector<double>& v) {
    int i = v.size() -1;
    while (i > 0 and v[i] < v[i-1]) {
        swap2(v[i], v[i-1]);
        i--;
    }
}
        
    


int main() {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(4);
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i=0; i<n; ++i) {
            cin >> V[i];
        }
        insert(V);
        for (int i=0; i<n; ++i) {
            cout << " " << V[i];
        }
        cout << endl;
    }
}
