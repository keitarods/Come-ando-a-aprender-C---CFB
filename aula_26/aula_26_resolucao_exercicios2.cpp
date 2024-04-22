#include <iostream>
using namespace std;

int fatorial(int n);
int fibonacci(int n);

int main(){
	int val, res, fibo, i;

	val = 20;
	res=fatorial(val);
	fibo=fibonacci(val);
	cout << "Fatorial de " << val << ": " << res << "\n";

	cout << "O ultimo numero da sequencia de Fibonacci " << val << " e: " << fibo << "\n";

    cout << "A sequencia de Fibonacci " << val << " e: ";
	for(i=1; i<=val; i++){
         cout << fibonacci(i) << " ";
	}


	return 0;

}

int fatorial(int n){
    //cout << n << "aqui";
    if(n == 0){
        return 1;
    }
    return n*fatorial(n-1);
}

int fibonacci(int n){
    if(n==1 || n==2){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
    }
