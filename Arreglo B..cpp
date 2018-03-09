#include <iostream>


int main() {
	int num[]={10,20,30,40,50},multi=1;
	for(int i=0;i<5;i++){
		multi=multi*num[i];
	}
	printf("La suma de sus elementos es: %d",multi);
	return 0;
}
