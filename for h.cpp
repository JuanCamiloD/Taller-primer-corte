#include <iostream>

int main() {
	int numero,i;
	printf("ingrese un numero: \n");
	scanf("%d",&numero);
	for(i=2;numero>1;i++){
		while(numero%i==0){
			printf("%d \t | \t %d \n",numero,i);
			numero=numero/i;
		}
	}
	return 0;
}
