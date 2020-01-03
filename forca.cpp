#include <iostream>
#include <string>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

void menu();
void limpatela();

int main(int argc, char const *argv[]){

	menu();

	return 0;
}

//Menu inicial
void menu(){

	int opcao;

	do{
		
		cout << "-----Bem vindo ao jogo-----";
		cout << "\n1) - Jogo sozinho";
		cout << "\n2) - Jogo em dupla";
		cout << "\n3) - Sobre";
		cout << "\n4) - Sair";
		cout << "\nDigite uma opcao: ";
		cin >> opcao;

		limpatela();

		switch(opcao){
			case 1:
				cout << "opcao 1";
				break;
			case 2:
				cout << "opcao 2";
				break;
			case 3:
				cout << "opcao 3";
				break;
			case 4:
				cout << "Obrigado por jogar";
				break;
			default :
				opcao = 1;
				cout << "Digite Apenas as opcoes disponiveis!!!!!\n";
		}
	} while (opcao>0 && opcao<4);

}
void limpatela(){
	system("cls");
}