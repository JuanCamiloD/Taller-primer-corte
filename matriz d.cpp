#include <iostream>

int main() {
	int m1[15][15],m2[15][15],f,c;
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
			m2[i][j]=m1[i][j]; 
			printf("[%d]",m2[i][j]);
			
		}
		printf(" \n");
	}
	return 0;
}

