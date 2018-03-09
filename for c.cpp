#include <stdio.h>

int main(){
       int i, numero, suma=0;

    printf("Digite el numero de elementos:\n");
    scanf("%d",&numero);

    for(i=1; i<=numero; i++){
        suma=suma+i;
    }

    printf("La suma de los numeros es: %d\n", suma);

    return 0;
}
