#include <iostream>


int main() {
	int m1[1][1],m2[1][1];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("digite un numero:");
			scanf("%d",&m1[i][j]);
		}	
	}
		for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			m2[i][j]=m1[i][j]; 
			printf("[%d]",m2[i][j]);
			
		}
		printf(" \n");
	}
	return 0;
}
