/*Nombre:Jeremias Luquez
  Legajo: 413860
  9/04/2024*/

#include <stdio.h>

int main(){
    
    float numero;             // uso float para almacenar un numero decimal
    printf("Ingrese un numero: ");
    scanf("%f", &numero);    
                              // creo 3 situaciones
    if (numero > 0)           // si el numero ingresado es mayor a 0, se devuelve el numero y el mensaje de positivo
    {
        printf("El numero %.1f es positivo", numero); //utilizo %.1f para mostrar posibles numeros decimales ya sea negativos o positivos
    }
    else if (numero < 0)      // si el numero ingresado es menor a 0, se devuelve el numero y el mensaje de negativo
    {
        printf("El numero %.1f es negativo", numero); //utilizo %.1f para mostrar posibles numeros decimales ya sea negativos o positivos
    }
    else                      // si el numero ingresado no cumple con ninguno de las caracteristicas anterior, se devuelve el mensaje de cero
    {
        printf("El numero es cero");
    }

    return 0;
}


/*
#include <stdio.h>

int main(){
    
    float numero;             
    printf("Ingrese un numero: ");
    scanf("%f", &numero);
                             
    if (numero > 0)           
    {
        printf("El numero %.1f es positivo", numero);
    }
    else if (numero < 0)    
    {
        printf("El numero %.1f es negativo", numero);
    }
    else                 
    {
        printf("El numero es cero");
    }

    return 0;
    */