#include <iostream>

int main() {
char c;
printf("Introduzca una vocal: "); 
scanf("%c",&c);
switch(c) {
case 'a': puts(" a. minuscula.");
break;
case 'e': puts("e. minuscula.");
break;
case 'i': puts(" i. minuscula");
break;
case 'o': puts(" o. minuscula");
break;
case 'u': puts(" u. minuscula");
break;
case 'A': puts(" A. mayuscula.");
break;
case 'E': puts(" E. mayuscula");
break;
case 'I': puts(" I. mayuscula.");
break;
case 'O': puts(" O. mayuscula.");
break;
case 'U': puts(" U. mayuscula.");
break;
default: puts("Error");
}	
	return 0;
}
