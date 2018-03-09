#include <iostream>


int main() {
	int m1[15][15],f,c;
	printf("digite el numero de filas: ");
	scanf("%d",&f);
	printf("digite el numero de columnas: ");
	scanf("%d",&c);
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			printf("digite un numero:");
			scanf("%d",&m1[i][j]);
		}	
	}
		for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			 
			printf("[%d]",m1[i][j]);
			
		}
		printf(" \n");
	}
	return 0;
}
