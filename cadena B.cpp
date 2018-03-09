#include <iostream>

int main() {
	char const L=30;
	char v1[L],cadena[L],v2[L];
	printf("ingrese una serie de caracteres: ");
	fgets(cadena,L,stdin);
	for(int i=0;i<L;i++){
		v1[i]=cadena[i];
			
	}
	for(int j=0;j<L;j++){
		v2[j]=v1[j];
	printf("%c",v2[j]);
}
	return 0;
}
