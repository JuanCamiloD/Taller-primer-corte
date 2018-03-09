#include <stdio.h>
#include <string.h>

int main(){
    char nombre[50];
    int contador = 0;
    printf("Ingrese una cadena: ");
    fflush(stdin);
    gets(nombre);

    while(contador < strlen(nombre)){
        contador++;
    }

    
    if(contador>10){
	
    printf("%s\n", nombre);}
    else{
	}

    return 0;
}
