#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct interval {
	int a, b;	
};

bool fa(const interval& c, const interval& d) {
	return c.a < d.a;
}

bool fb(const interval& c, const interval& d) {
	return c.b < d.b;
}

int intervals_dins(vector<interval>& A, vector<interval>& B) {
	int i = 0;
	int n = A.size();
	int compt = 0;
	while (i < n) {
		interval t = A[i];
		if (B[i].a != t.a and B[i].b != t.b) {
			while (i < n and B[i].a != t.a and B[i].b != t.b) {i++; compt++;}
		}
		i++;
	}
	return compt;	
}
		

int main() {
	int n;
	while (cin >> n) {
		vector<interval> A(n);
		for (int i = 0; i < n; i++) cin >> A[i].a >> A[i].b;
		vector<interval> B = A;
		sort(A.begin(), A.end(), fa);
		sort(B.begin(), B.end(), fb);
		cout << intervals_dins(A, B) << endl;
	}
}
		
