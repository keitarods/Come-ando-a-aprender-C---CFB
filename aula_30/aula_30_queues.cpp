#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue <string> cartas;

    cartas.push("Rei de copas");
    cartas.push("Rei de espadas");
    cartas.push("Rei de paus");
    cartas.push("Rei de ouros");

    cout << "Tamanho da pilha: " << cartas.size() << "\n";
    cout << "Tamanho da pilha: " << cartas.front() << "\n";
    cout << "Tamanho da pilha: " << cartas.back() << "\n";

    while(!cartas.empty()){
        cout << "Carta do topo: " << cartas.front() << "\n";
        cartas.pop();
    }

    /*empty
    size
    front
    back
    push
    pop
    */

	return 0;

}
