#include <iostream>

int main() {
	int num;
	printf("Digite un numero para saber que mes del a�o es: ");
	scanf("%d",&num);
switch(num){
case 1: puts(" Enero");
break;
case 2: puts(" Febrero");
break;
case 3: puts(" Marzo");
break;
case 4: puts(" Abril");
break;
case 5: puts(" Mayo");
break;
case 6: puts(" Junio");
break;
case 7: puts(" Julio");
break;
case 8: puts(" Agosto");
break;
case 9: puts(" Septiembre");
break;
case 10: puts(" Octubre");
break;
case 11: puts(" Noviembre");
break;
case 12: puts(" Diembre");
break;
default: puts("Error");
}	
	return 0;
}
