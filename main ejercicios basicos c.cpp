#include <iostream>


int main() {
int h_di,h_n,h_do,h_f,n_di,n_n,n_do,n_f,total;
printf("ingrese el numero de horas diurnas \n");
scanf("%d",&n_di );
printf("ingrese el numero de horas nocturnas \n");
scanf("%d",&n_n );
printf("ingrese el numero de horas dominicales \n");
scanf("%d",&n_do );
printf("ingrese el numero de horas festivas \n");
scanf("%d",&n_f );
h_di=2500*n_di;
h_n=((2500*0.35)+2500)*n_n;
h_do=((2500*0.50)+2500)*n_do;
h_f=((2500*0.75)+2500)*n_f;
total= h_di+h_n+h_do+h_f;

printf("Pago por horas diurnas: %d\n",h_di );
printf("Pago por horas nocturnas: %d\n",h_n );
printf("Pago por horas dominicales: %d\n",h_do );
printf("Pago por horas festivas: %d\n",h_f );
printf("Salario total: %d\n",total);
	return 0;
}
