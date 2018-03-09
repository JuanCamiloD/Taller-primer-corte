#include <iostream>


int main() {
int multiplicacion,ingreso,i=1;
printf("Ingresa el numero de la tabla en un rango de 1 a 10: \n");
scanf("%d%",&ingreso);
do{

multiplicacion = ingreso * i;
printf("%d x %d = %d \n",ingreso,i,multiplicacion);
i++;
}
while(i<=10);
	return 0;
}
