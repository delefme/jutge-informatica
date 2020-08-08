#include <iostream>
using namespace std;

int numdig(int n) {
	int i = 1; //el nombre de dĂ­gits
	int d = 10; //per les potĂ¨ncies de 10
	while (n/d > 0) {
		i = i+1;
		d = 10*d;
	}
    return i;
}
bool is_balanced(int n) {
    int i = numdig(n);
    int suma_imparella = 0;
    int suma_parella = 0;
	while (i > 0) {
        if (i%2 == 1) suma_imparella = suma_imparella + (n)%10;
        else if (i%2 == 0) suma_parella = suma_parella + (n)%10;
        n = n/10;
        i--;
	}
    if (suma_parella == suma_imparella) return true;
    else return false;
}

int main() {
  int n;
  while (cin >> n) cout << is_balanced(n) << endl;
}
