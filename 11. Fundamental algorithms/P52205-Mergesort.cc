#include <iostream>
#include <vector>
using namespace std;

vector<double> merge(const vector<double> & V1, const vector<double> & V2) {
    int v1 = V1.size();
    int v2 = V2.size();
    vector<double> A(0);
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

void mergesort(vector<double>& v) {
    int n = v.size();
    if (n == 0);
    else if (n == 1);
    else {
        vector<double> left(0);
        vector<double> right(0);
        for (int i = n - n/2; i < n; i++) right.push_back(v[i]);
        for (int i = 0; i < n/2; i++) left.push_back(v[i]);
        if (n%2 == 1) left.push_back(v[n/2]);
        mergesort(left);
        mergesort(right);
        vector<double> A = merge(left, right);
        v = A;
    }
}


int main() {
    int n;
    while (cin >> n) {
        vector<double> v(n);
        for (int i=0; i<n; ++i) {
            cin >> v[i];
        }
        mergesort(v);
        for (int i=0; i<n; ++i) {
            cout << " " << v[i];
        }
        cout << endl;
    }
}
