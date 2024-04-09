#include <iostream>

using namespace std;

int n1, n2; // Variaveis Globais


int main(){
	
	//Operadores Matemáticos: + - / * % ()
	
	int n3, n4; // Variaveis Locais
	int res1;
	int res2;
	
	n1=11;
	n2=3;
	n3=5;
	n4=2;
	
	res1=n1/n2;
	res2=n1%n2;
	
	cout << "Divisão é:" << res1 << "\n\n";
	cout << "Resto é:" << res2 << "\n\n";
	
	
	return 0;
	
}
