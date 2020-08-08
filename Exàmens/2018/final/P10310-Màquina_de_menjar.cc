#include <iostream>
#include <vector>
using namespace std;

int i_max(const vector<int>& A) {
	int n = A.size();
	int ind = 0;
	int max = 0;
	for (int i = 0; i < n; i++) {
		if (max < A[i]) {
			max = A[i];
			ind = i;
		}
	}
	return ind;
}

void fibonacci(vector<int>& fib, int n) {
	int i = fib.size()-1;
	while (n >= fib[i]) {
		i++;
		fib.push_back(fib[i-1] + fib[i-2]);
	}
}

void printpots(const vector<int>& A) {
	int n = A.size();
	cout << A[0];
	for (int i = 1; i < n; i++) cout << ' ' << A[i];
	cout << endl;
}
int main() {
	int n;
	vector<int> fib(3);
	fib[2] = 1;
	fib[1] = 1;
	fib[0] = 0;
	while (cin >> n) {
		int sumai = 0;
		vector<int> pots(n);
		for (int i = 0; i < n; i++) {
			cin >> pots[i];
			sumai += pots[i];
		}
		fibonacci(fib, pots[i_max(pots)]);
		int j = 2;
		for (int i = 0; i < n; i++) {
			while (pots[i] - fib[j] >= 0) {
				pots[i] += -fib[j];
				sumai += -fib[j];
				j++;
				printpots(pots);
			}
		}
		int max;
		while (sumai > 0) {
			max = i_max(pots);
			while (pots[max] < fib[j]) j--;
			int i = 0;
			bool found = false;
			while (not found) {
				if (pots[i] >= fib[j]) {
					pots[i] += -fib[j];
					sumai += -fib[j];
					printpots(pots);
					found = true;
				}
				i++;
			}
		}
		cout << endl;
	}
}
	
				
		
	

			
			
				 
		

		
	

			
			
				 
		
