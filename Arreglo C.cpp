#include <iostream>


int main() {
	int num[100],n;
	
	printf("cuantos elementos tiene el arreglo:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf ("Digite un numero:");
		scanf("%d",&num[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d = %d \n",i,num[i]);
	}
	return 0;
}
