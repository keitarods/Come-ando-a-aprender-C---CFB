#include <iostream>
using namespace std;

void contador(int num, int cont=0);
void fatorial(int num, int fat=1);
void multiplica();

int main(){

    contador(5);

	return 0;

}

void contador(int num, int cont){
    cout << cont << "\n";
    if(num > cont){
        contador(num, ++cont);
    };

}


