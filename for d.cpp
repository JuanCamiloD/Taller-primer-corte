#include <stdio.h>
#include <math.h>

int main(){

int i, n, suma=0, elevacion=0;

    printf("Digite un numero como exponente:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        elevacion=pow(2,i);
        suma=suma+elevacion;
    }

    printf("El valor total es: %d\n", suma);

    return 0;
}
