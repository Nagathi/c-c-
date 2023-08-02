#include <iostream>

using namespace std;

class Carro{
	private:
		int velMax;
		const char* nome;
		
	public:
		int potencia;
		
	int getVelMax(){
		return this-> velMax;
	}
	
	const char* getNome(){
		return this->nome;
	}
	
	Carro(){
		velMax = 120;
		potencia = 80;
		nome = "Popular";
	}
	
	Carro(int potencia, const char* nome){
		this->potencia = potencia;
		this->nome = nome;
		
		if(potencia < 120){
			velMax = 120;	
		}else if(potencia < 200){
			velMax = 240;
		}else{
			velMax = 360;
		}
	
	}
};
