#include <iostream>


int main() {
int precio_dolar,n_dolares, total;
printf("Ingres el valor del dolar:" );
scanf("%d",&precio_dolar );
printf("Ingrese la cantidad de dolares: " );
scanf("%d",&n_dolares);
total= precio_dolar*n_dolares;

printf("El total del cambio es:%d\n",total);

	return 0;
}
