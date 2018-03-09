#include <iostream>


int main() {
	int n=1,p=0;
	while (n<=100){
		p=n+p;
		n++;
		printf("suma= %d\n",p);
	}
	return 0;
}
