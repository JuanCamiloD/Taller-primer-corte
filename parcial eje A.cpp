#include <iostream>

int main() {
	char const l=100;
	int m1[l][l],c=1,a=0;
	int f;
	printf ("Escriba el tamaño de la matriz: ")
	scanf("%d",&f);

	for(int i=0;i<f;i++){
		for(int j=0;j<f;j++){
			if(i==j){
			printf("[%d]",c);
			}
			
			printf("[%d]",a);
			
		
		}
		printf("\n");
	
	}

	return 0;
}
