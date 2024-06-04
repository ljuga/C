/*Nombre:Jeremias Luquez 
  Legajo: 413860 
  8/04/2024*/
#include <stdio.h>

int main()
{

    int numero1, numero2, numero3; // Creo una variable para almacenar los numeros, en este caso se utilizaran 3 valores.

    printf("Ingrese 3 numeros separados por una coma: ");
    scanf("%d,%d,%d", &numero1, &numero2, &numero3); // solicito que se ingresen los 3 valores separados por una coma

    int numMax = numero1; // determino que el primer numero va a ser el mas grande, aunque no lo sea

    if (numero2 > numMax) /*si el segundo numero ingresado es mayor al numero almacenado en primer lugar,
                           se remplazara el primer numero con el segundo en el int numMax; en caso contrario, no hace nada*/
    {
        numMax = numero2;
    }
    if (numero3 > numMax) /*si el tercer numero ingresado es mayor al numero almacenado en primer o segundo lugar,
                            se remplazara en el int numMax; en caso contrario, no hace nada*/
    {
        numMax = numero3;
    }

    printf("El numero mas alto es: %d \n", numMax); //se devuelve el valor final que quedo almacenado en la variable int


    return 0;
}


/*
#include <stdio.h>

int main()
{

    int numero1, numero2, numero3; 

    printf("Ingrese 3 numeros separados por una coma: ");
    scanf("%d,%d,%d", &numero1, &numero2, &numero3); 
    int numMax = numero1; 

    if (numero2 > numMax) 
    {
        numMax = numero2;
    }
    if (numero3 > numMax) 
    {
        numMax = numero3;
    }

    printf("El numero mas alto es: %d \n", numMax); 


    return 0;
}
*/