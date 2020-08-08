#include <iostream>
using namespace std;

int number_of_digits(int a) {
	int i = 1; //el nombre de dígits
	int d = 10; //per les potències de 10
	while (a/d > 0) {
		i = i+1;
		d = 10*d;
	}
	return i;
}

int power(int b, int e) {
		int i = 0;
		int p = 1;
		while (e > i) {
			i = i+1;
			p = b*p;
		}
		return p;
}

bool is_palindromic(int n) {
	int i = number_of_digits(n);
	int aux = i;
	int j = 1;
	while (aux >= j) {
		i = i-1; //per elevar 10 a un menys que el nombre de dígits
		if ((n-(n%power(10,i)))/(power(10,i)) != n%10) return false; //la primera part aïlla el primer dígit i la segona aïlla l'últim
		n = (n%power(10,i) - n%10)/10; //aquí elimino el primer i l'últim dígit
		i = i-1; //hem de tornar a restar perquè al pas anterior hem reduït n en dos dígits
		j = j+1; //comptador per saber quan hem de parar de comprovar-ho
		aux = aux - 1; //comptador per saber quan hem de parar de comprovar-ho
	}
	return true;
}

int main() {
	int a;
	cin >> a;
	cout << is_palindromic(a) << endl;
}
	
	
	
	
