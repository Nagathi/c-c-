#include <iostream>
#include <locale.h>

#include "Carro.h"

using namespace std;


int main(){
	
	setlocale(LC_ALL, "");
	
	Carro c1;
	
	cout << c1.getNome() << endl;
	cout << c1.getVelMax() << endl;
	
	Carro c2(200, "Esporttivo");
	
	cout << c2.getNome() << endl;
	cout << c2.getVelMax() << endl;
	
		

	return 0;
}
