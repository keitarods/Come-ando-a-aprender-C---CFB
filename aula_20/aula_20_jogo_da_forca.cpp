#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    int i, tam, chances, acertos;
    char palavra[30], letra[1];
    bool acerto;

    chances = 5;
    acertos = false;
    acertos = 0;

    cout << "Digite uma palavra\n";
    cin >> palavra;

    while (palavra[tam] != '\0'){
        tam++;
    }

    char secreta[tam];

    for(i=0; i<tam; i++){
        secreta[i] = '-';
    }



    while((chances > 0) && (acertos < tam)){
        cout << "Chances restantes: " << chances << '\n';
        cout << "acertos: " << acertos << '\n';


        for(i=0; i<tam; i++){
            cout<<secreta[i];
        }

        cout << "\n";
        cout << "Digite uma letra\n";
        cin >> letra[0];

        for(i=0; i<tam; i++){
            if(palavra[i] == letra[0]){
                acerto=true;
                secreta[i] = palavra[i];
                acertos++;
            }
        }

        if(!acerto){
            chances--;
        }
        acerto=false;
        system("cls");
    }

    if(acertos==tam){
        cout << "Você venceu o jogo.\n";
    }   else{
        cout << "Você perdeu o jogo.\n";
    }

    system("pause");

	return 0;

}
