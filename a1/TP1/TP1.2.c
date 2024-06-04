/*Nombre:Jeremias Luquez 
  Legajo: 413860 
  6/04/2024*/

#include <stdio.h>

int main()
{
    float numero; // Utilizo float para almacenar los valores de los numeros a multiplicar
    float multiplicador;

    // solicito al usuario los numeros necesarios para realizar la multiplicacion (numero y multiplicador)
    printf("Ingrese el numero a multiplicar: ");
    scanf("%f", &numero);
    printf("Ingrese el numero por el que se multiplicara: ");
    scanf("%f", &multiplicador);

    printf("Resultado de la multiplicacion: %.1f \n", numero * multiplicador); /* Por ultimo hago la multiplicacion directamente en el printf final.
                                                                                  Con %.1f dejo la posibilidad de poder mostrar resultados decimales*/
    return 0;
}



/*
#include <stdio.h>

int main()
{
    float numero; 
    float multiplicador;

    
    printf("Ingrese el numero a multiplicar: ");
    scanf("%f", &numero);
    printf("Ingrese el numero por el que se multiplicara: ");
    scanf("%f", &multiplicador);

    printf("Resultado de la multiplicacion: %.1f \n", numero * multiplicador); 
    return 0;
}

*/