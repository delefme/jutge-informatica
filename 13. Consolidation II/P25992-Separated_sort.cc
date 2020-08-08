#include <iostream>
#include <string>
#include <vector>
using namespace std;

void swap2(int& a, int& b) {
	int aux = a;
	a = b;
	b = aux;
}

void insert2(vector<int>& v) {
    int i = v.size() - 1;
    while (i > 0 and v[i] > v[i-1]) {
        swap2(v[i], v[i-1]);
        i--;
    }
}

void insert1(vector<int>& v) {
    int i = v.size() - 1;
    while (i > 0 and v[i] < v[i-1]) {
        swap2(v[i], v[i-1]);
        i--;
    }
}

int main() {
    int n;
    while (cin >> n) {
        vector <int> parells(0);
        vector <int> senars(0);
        if (n == 0) cout << endl << endl;
        if (n%2 == 0 and n != 0) parells.push_back(n);
        else if (n != 0) senars.push_back(n);
        while (cin >> n and n != 0) {
            if (n%2 == 0) {
                parells.push_back(n);
                insert1(parells);
            }
            else {
                senars.push_back(n);
                insert2(senars);
            }
        }
        int n = parells.size();
        int m = senars.size();
        for (int i = 0; i < n - 1; i++) cout << parells[i] << " ";
        if (n != 0) cout << parells[n-1];
        cout << endl;
        for (int i = 0; i < m - 1; i++) cout << senars[i] << " ";
        if (m != 0) cout << senars[m-1];
        cout << endl;
    }
}

