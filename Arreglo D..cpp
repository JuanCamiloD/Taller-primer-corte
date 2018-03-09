#include <iostream>



int main() {
int num[100],n;
	
	printf("cuantos elementos tiene el arreglo:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	
		printf ("Digite un numero %d:",i+1);
		scanf("%d",&num[i]);
	}

		
	for (int i=n-1;i>=0;i--){
		printf("El numero es: %d\n",num[i]);
	}

	
	return 0;
}
