#include <iostream>


int main() {
	int num,recogida=-1;
	do{
	printf("Escriba un numero: \n");
	scanf("%d",&num);
	recogida++;
	}while(num!=0);
	printf("la cantidad de numeros que ingreso fueron: %d",recogida);
	return 0;
}
