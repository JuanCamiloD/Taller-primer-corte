#include <iostream>

int main() {
	int num,resultado,opcion;
	printf("Opcion 1,: sacar el cubo a un numero.\n""Opcion 2: Comprobar si un numero es par o impar. \n""Opcion 3 : Salir.");
	scanf("%d",&opcion);
	switch(opcion){
		case 1: printf("ingrese un numero:");
		scanf("%d",&num);
		resultado=num*num*num;
		printf("El resultado es: %d",resultado);
		break;
		case 2: printf("ingrese un numero");
		scanf("%d",&num);
		 if ( num % 2 == 0 ){
		 
        printf( "\n   ES PAR" );
    }else{
	
        printf( "\n   ES IMPAR" );}
        break;
        default: printf("Salir");

        
	}
	return 0;
}
