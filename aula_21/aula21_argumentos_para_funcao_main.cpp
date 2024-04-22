#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]){

    if(argc > 1){
        if(!strcmp(argv[1],"sol")){
            cout << "Hoje vou ao clube\n";
        }
        else if (!strcmp(argv[1], "nublado"))
            cout << "Hoje vou ao cinema\n";
    }   else{
            cout << "Hoje vou ficar em casa\n";
            }

	return 0;

}
