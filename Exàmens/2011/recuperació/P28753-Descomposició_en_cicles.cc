#include <iostream>
#include <vector>
using namespace std;


void cicles(vector<int>& v, vector<bool>& used){
	int i = 0;
	int n = v.size();
	while(i < n){
		bool first = true;
		while(not used[i]){
			used[i] = true;
			if(first){
				 cout << i;
				 first = false;
			}
			else cout << ' ' << i;
			i = v[i];
		}
		cout << endl;
		int t = 0;
		while(t < n and used[t]) ++t;
		i = t;
	}
}



int main(){
	int n;
	while(cin >> n){
		vector<int> v(n);
		vector<bool> used(n,false);
		for(int i=0;i < n; ++i){
			cin >> v[i];
		}
		cicles(v,used);
		cout << "----------" << endl;	
	}

}
