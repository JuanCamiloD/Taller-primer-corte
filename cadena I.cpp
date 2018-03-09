#include <iostream>


int main() {
	char c1[15];
	int a=0,e=0,I=0,o=0,u=0;
	printf("Digite una palabra para determinar cuantas veces esta una vocal en ella: ");
	fgets(c1,15,stdin);
	for(int i=0;i<15;i++){
		if (c1[i]==97){
			a++;
		}
	}
		for(int i=0;i<15;i++){
		if (c1[i]==101){
			e++;
		}
	}
		for(int i=0;i<15;i++){
		if (c1[i]==105){
			I++;
		}
	}
	
		for(int i=0;i<15;i++){
			if (c1[i]==111){
			o++;
		}
	}
		for(int i=0;i<15;i++){
			if (c1[i]==117){
			u++;
		}
	}
	if(a>=1){
	
	printf("la cantidad de veces que esta la vocal a es:%d \n",a);
	}else{
	}
	
	if(e>=1){
		
		printf("la cantidad de veces que esta la vocal e es:%d\n ",e);
		}else{
		}
	
	if(I>=1){
		printf("la cantidad de veces que esta la vocal i es:%d\n ",I);
		}else{
		}
	
	if(o>=1){
		printf("la cantidad de veces que esta la vocal o es:%d\n ",o);
		}else{
		}
	
	if(u>=1){
		printf("la cantidad de veces que esta la vocal u es:%d\n ",u);
		}else{
		}
	
	
	return 0;
}
