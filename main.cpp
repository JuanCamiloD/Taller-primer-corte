#include <stdio.h>
#include <math.h>

int main(){
    float c, r1, r2, r3;
    printf("Ingrese el radio de la circunferencia: ");
    scanf("%f", &c);

    r1 = M_PI * pow(c, 2);
    r2 = 2 * c;
    r3 = 2 * M_PI * c;
    
    printf("La circunferencia es: %f\n",c);
    printf("Area de la circunferencia: %f\n", r1);
    printf("Diametro de la circunferencia: %f\n", r2);
    printf("Longitud de la circunferencia: %f\n", r3);
	return 0;
}
