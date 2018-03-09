#include <iostream>
#include <stdlib.h>

int main() {
	char c1[15],c2[15];
	int entero;
	float real;
	printf("digite una cadena de numeros enteros: ");
	fgets(c1,15,stdin);
	printf("digite una cadena de numeros reales: ");
	fgets(c2,15,stdin);
	
	

	
	entero=atoi(c1);
	printf("la cadena convertida a dato entero es: %d",entero[i]);

	real=atof(c2);
	printf("la cadena convertida a dato real es: %f",real[i]);

	
	return 0;
}
