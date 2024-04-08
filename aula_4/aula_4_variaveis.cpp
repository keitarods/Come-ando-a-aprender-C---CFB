#include <iostream>

using namespace std;

int main(){
	
	//TIPO NOME;
	//TIPO NOME = VALOR;
	
	int vidas=0; //10,25
	char letra='B'; // 'B' 
	double decimal=5.2; //2,499999
	float decimal2=5.2; //2,5
	bool vivo=true; //true or false
	string nome="Bruno"; //"Bruno"
	
	
	//Comentário
	/* */   //Comentario longo
	
	cout << "Digite o numero de vidas: ";
	cin >> vidas;
	cout << "Digite uma Letra: ";
	cin >> letra;
	cout << "Digite um salario: ";
	cin >> decimal;
	cout << "Digite seu Nome: ";
	cin >> nome;
	
	
	cout << vidas << "\n" << letra << "\n" << decimal << "\n" << vivo << "\n" << nome << "\n";
	
	
	return 0;
	
}
