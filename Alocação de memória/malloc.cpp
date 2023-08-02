#include <iostream>
#include <stdlib.h>

using namespace std;


int main(){
		
	char *vnome;
	vnome = (char *)malloc(sizeof(char));
	
	
	gets(vnome);
	
	cout << vnome << endl;
	
	cout << sizeof(int) << endl; 		//INT OCUPA 4 BYTES
	cout << sizeof(float) << endl; 		//FLOAT OCUPA 4 BYTES
	cout << sizeof(double) << endl;		//DOUBLE OCUPA 8 BYTES
	cout << sizeof(char) << endl;		//CHAR OCUPA 1 BYTE
	cout << sizeof(string) << endl;		//STRING OCUPA 8 BYTES
		
	return 0;
}
