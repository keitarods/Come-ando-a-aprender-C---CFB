#include <iostream>
using namespace std;

void soma(int n1, int n2);
void soma();

int main(){

    soma(10,60);
    soma();

	return 0;

}

void soma(int n1, int n2){
    int re;
    re = n1+n2;
    cout << "A soma de n1 " << n1 << " com" << n2 << "é igual a: " << re << "\n";
}

void soma(){
    int re;
    int n1 = 20;
    int n2 = 100;

    re = n1+n2;

    cout << "A soma de n1 " << n1 << " com" << n2 << "é igual a: " << re << "\n";
}
