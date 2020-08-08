#include <iostream>
#include <vector>
using namespace std;
using fila = vector<bool>;
using matriu = vector<fila>;


int main() {
	int f, c, t;
	while (cin >> f >> c >> t) {
		vector<bool> used_rows(f, false);
		int num_used_rows = 0;
		vector<bool> used_columns(c, false);
		int num_used_columns = 0;
		int segures = f*c;
		for (int l = 0; l < t; l++) {
			int i, j;
			cin >> i >> j;
			i--; j--;
			if (used_rows[i] and used_columns[j]);
			else if (used_rows[i]) {
				segures -= (f - num_used_rows);
				used_columns[j] = true;
				num_used_columns++;
			}
			else if (used_columns[j]) {
				segures -= (c - num_used_columns);
				used_rows[i] = true;
				num_used_rows++;
			}
			else {
				segures -= (c - num_used_columns) + (f - num_used_rows);
				segures++;
				used_rows[i] = true;
				used_columns[j] = true;
				num_used_rows++;
				num_used_columns++;
			}
		}
		cout << segures << endl;
	}
}
