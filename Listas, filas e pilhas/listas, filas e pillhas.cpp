#include <iostream>
#include <stack>
#include <queue>
#include <locale.h>
#include <list>

using namespace std;

void pilha(){
	stack <string> cartas;
	
	cartas.push("Ás de espadas"); //Adiciona elemento
	cartas.push("Ás de copas"); //Adiciona elemento
	cartas.push("Ás de palmas"); //Adiciona elemento
	cartas.push("Ás de ouros"); //Adiciona elemento
	 
	cartas.pop(); //Retira elemento
	
	while(cartas.empty() == false){
		cartas.pop();
	} //Remove todos os elementos da pilha
	

	
		
}

void fila(){
	
	queue <string> cartas;
	
	cartas.push("Ás de espadas"); //Adiciona elemento
	cartas.push("Ás de copas"); //Adiciona elemento
	cartas.push("Ás de palmas"); //Adiciona elemento
	cartas.push("Ás de ouros"); //Adiciona elemento
	 
	cartas.pop(); //Retira o elemento
	
}

void lista(){
	list<int> aula;
	list<int>::iterator it;
	int tamanho = 10;
	
	for(int i = 0; i < tamanho; i++){
		aula.push_front(i);
	}
	
	it = aula.begin();
	advance(it, 5);
	aula.insert(it, 20);
	
	aula.sort();
	
	for(int i = 0; i < tamanho; i++){
		cout << aula.front() << endl;
		aula.pop_front();
	}
	
}

void language(){
	setlocale(LC_ALL, "");
}

int main(){
	language();
	pilha();
	fila();
	lista();
		
	return 0;
	
}
