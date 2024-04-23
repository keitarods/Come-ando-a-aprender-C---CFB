#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack <string> cartas;

    cartas.push("Rei de copas");
    cartas.push("Rei de espadas");
    cartas.push("Rei de paus");
    cartas.push("Rei de ouros");

    cout << "Tamanho da pilha: " << cartas.size() << "\n";

    cout << "Carta do topo" << cartas.top() << "\n";

    while(!cartas.empty()){
        cout << "Carta do topo: " << cartas.top() << "\n";
        cartas.pop();
    }

    cartas.pop();
    cartas.pop();

    cout << "Carta do topos" << cartas.top() << "\n";

	return 0;

}
