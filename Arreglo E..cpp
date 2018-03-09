#include <iostream>

int main() {
	int num[50],n,mayor=0;
	printf("Digite el numero de elementos del arreglo: \n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Digite un numero %d:",i+1);
		scanf("%d",&num[i]);
		if(num[i]>mayor){
			mayor=num[i];
		}
	}
	printf("El numero mayor es : %d",mayor);
	return 0;
}
