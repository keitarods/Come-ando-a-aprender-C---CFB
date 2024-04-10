#include <iostream>
using namespace std;

int main(){
	
	int num;
	
	/*
	1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
	3 a 6
	10 a 14
	16 a 19
	!
	*/
	
	num = 7;
	
	if ( (num>=3 && num <=6) || (num > 9 && num < 15 && !7) || (num > 15 && num < 20)){
		cout << "\n\nValor Aceito\n\n";
	}else{
		cout << "\n\nValor nao aceito";
	}
	
	return 0;
}
