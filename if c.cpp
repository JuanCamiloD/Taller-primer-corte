#include <iostream>

int main() {
	 int numero;

    printf( "\n   Introduzca un numero entero: " );
    scanf( "%d", &numero );

    if ( numero % 2 == 0 )
        printf( "\n   ES PAR" );
    else
        printf( "\n   ES IMPAR" );
	return 0;
}
