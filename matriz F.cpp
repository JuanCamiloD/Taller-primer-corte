#include <iostream>



int main(int argc, char** argv) {
	int m1[2][2],m2[2][2],m3[2][2];
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("digite un numero de la matriz 1:");
			scanf("%d",&m1[i][j]);
		}	
		
	}
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("digite un numero de la matriz 2:");
			scanf("%d",&m2[i][j]);
		}	
	}
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			m3[i][j]=m1[i][j]+m2[i][j];
		printf("[%d]",m3[i][j]);
		}
		printf("\n");	
	}
	return 0;
}
