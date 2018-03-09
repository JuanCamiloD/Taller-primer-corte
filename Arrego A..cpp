#include <iostream>


int main() {
	int num[]={10,20,30,40,50},suma=0;
	for(int i=0;i<5;i++){
		suma+=num[i];
	}
	printf("La suma de sus elementos es: %d",suma);
	return 0;
}
