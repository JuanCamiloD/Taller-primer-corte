#include <stdio.h>
#include <string.h>

int main() {
	char c1[15];
	printf("ingrese su nombre: ");
	fgets(c1,15,stdin);
	if(c1[0]==65){
	
     strlwr(c1);

	printf("%s",c1);}
	else{
		printf("%s",c1);
	}
  
	
	return 0;
}
