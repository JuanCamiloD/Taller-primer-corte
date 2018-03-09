#include <iostream>

int main() {
		int j=0;
   char v1[]={"Buenos dias"}, v2[15],v3[25], v4[]={""};
   printf("ingrese su nombre: ");
   fgets(v2,15,stdin);
	for(int i=0;i<25;i++){
		if(i<11){
			v3[i]=v1[i];
		}else if(i==11){
	         
			v3[i]=v4[0];
			
		}else{
			v3[i]=v2[j];
			j++;
		}
			printf("%c",v3[i]);
	}
	
	return 0;
}
