#include <iostream>

int main() {
	int n1,n2,n3,nc;
	printf("\n Ingrese el numero 1: ");
	scanf("%d",&n1);
	printf("\n Ingrese el numero 2: ");
	scanf("%d",&n2);
	printf("\n Ingrese el numero 3: ");
	scanf("%d",&n3);
	printf("\n Ingrese un numero para ver si coincide con alguno de los anteriores: ");
	scanf("%d",&nc);
	
	if (nc==n1){
		printf("\n El primer numero es igual al valor que comparo: %d",n1);
	} else if(nc==n2){
			printf("\n El segundo numero es igual al valor que comparo: %d",n2);
	}else{
		printf("\n El tercer numero es igual al valor que comparo: %d",n3);
	}
	return 0;
}
