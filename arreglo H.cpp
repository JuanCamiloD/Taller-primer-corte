#include <iostream>

int main() {
	int num[4],multi[4],produc;
    for(int i=0;i<5;i++){
    	printf("Digite un numero %d :",i+1);
    	scanf("%d",&num[i]);
	}
	for(int j=0;j<5;j++){
		multi[j]=num[j]*2;
		printf("Los elementos del arreglo anterior multiplicado 2 es: %d\n",multi[j]);
	}
	return 0;
}
