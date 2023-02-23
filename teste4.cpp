#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

main(){
	srand (time(NULL));
	
	setlocale(LC_ALL, "Portuguese");
	
	int esconde, nArvores, tentativas, nivel, chute;
	bool mentiroso = false;
	
	cout << "Informe a quantidade de arvores:";
	cin >> nArvores;
	
	esconde = rand() % nArvores + 0;
	
	cout << "Informe o nível do jogo" << endl;
	cout << "1- Fácil" << endl;
	cout << "2- Médio" << endl;
	cout << "3- Dificil" << endl;
	cout << "R: ";
	cin >> nivel;
	
	system("cls");
	
	if (nivel == 1){
		tentativas = 15;
	}else if (nivel == 2){
		tentativas = 10;
	}else {
		tentativas = 5;
	}
	
	for (int i = 0; i < tentativas; i++){
		cout << "Você tem " << i+1 << " de " << tentativas << " tentativas" << endl;
		cout << "Informe a arvore: ";
		cin >> chute;
		
		if (chute > esconde){
			cout << "Está mais a esquerda" << endl;
		}else if (chute < esconde){
			cout << "Está mais a direita" << endl;
		}else {
			mentiroso = true;
			break;
		}
	}
	
	if (mentiroso == false){
		cout << "Você perdeu";
	}else {
		cout << "Você ganhou";
	}
}





