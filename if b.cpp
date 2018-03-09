#include <iostream>


int main(int argc, char** argv) {
	int n1,n2,n3,nmayor;
	printf("Numero 1:");
	scanf("%d",&n1);
	printf("Numero 2:");
	scanf("%d",&n2);
	printf("Numero 3:");
	scanf("%d",&n3);
	if ((n1>n2)&&(n1>n3)){
		nmayor=(n1);
	}
	else {
		if((n2>n1)&&(n2>n3)){
			nmayor=(n2);}
			else{
				nmayor=(n3);
			}
		}
	
	printf("El numero mayor es: %d\n",nmayor);
	return 0;
}
