#include <iostream>


int main() {
int num[]={10,20,30,40,50},suma=0;
	for(int i=0;i<5;i++){
		suma+=num[i];
	}
	for(int i=0;i<5;i++){
		if(num[i]==suma){
		printf("Si el numero %d es igual a la suma de todos los elementos del vector",num[i]);
		
		}
	}printf("no hay un elemento que sea la suma del vector.");
	return 0;
}
