#include <iostream>

int main() {
	int n=1,p=1,m;
	printf("ingrese un numero para ver su factorial:  \n");
	scanf("%d",&m);
	while (n<=m){
		p=n*p;
		n++;
		printf("el factotorial es : %d\n",p);
		
		}
	return 0;
}
