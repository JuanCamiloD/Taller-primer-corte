#include <iostream>

int main() {
	int m1[3][3];

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("digite un numero:");
			scanf("%d",&m1[i][j]);
		}	
	}
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){ 
			printf("[%d]",m1[j][i]);
			
		}
		printf(" \n");
	}
	return 0;
}
