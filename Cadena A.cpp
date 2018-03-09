
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

    printf("Nombre: %s\n", nombre);
    printf("la longitud es de :%d\n", contador);
 
    return 0;


}
