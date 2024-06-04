/*Nombre:Jeremias Luquez
  Legajo: 413860
  16/04/2024*/

#include <stdio.h>

int main()
{
    int cantidad;

    printf("Ingresa el numero de datos que desea ingresar: "); /* solicito al usuario que ingrese un valor para determinar la cantidad de datos
                                                                que se ingresaran en el array*/
    scanf("%d", &cantidad);

    int numeros[cantidad];                        // como ya se tiene la cantidad de datos puede pasar a ingresar los valores deseados a promediar
    printf("Ingrese los %d datos: \n", cantidad); // para que se vea la cantidad de numeros a ingresar, imprimo el valor actual de la variable cantidad

    int i = 0; //declaro i antes de ingresar al bucle
    while (i < cantidad) /*creo un bucle para poder ingresar los valores en el array. Me aseguro de que i sea igual a cero,
                                 determino condiciones para que se siga reporduciendo, si i es menor a cantidad(primer valor ingresado por el usuario)seguira (i < cantidad),
                                 ademas de que cada vez se aumentara en 1 el valor de i (i++ = i + 1)*/
    {
        printf("Ingrese numero %d :", i + 1); /*para saber el orden de los numeros que estas ingresando utilizo, i + 1 para transformar el primer valor 0 en 1 e ir
                                              sumandole por cada vez que se repita el bucle*/
        scanf("%d", &numeros[i]);
        i++;
    }

    float suma = 0.0; // cre una variable suma para almacenar el valor resultante de sumar los valores almacenados en el array
    i = 0; // reinicio i y lo vuelvo a 0 para poder reutilizarlo
    while (i < cantidad)
    {
        suma += numeros[i];
        i++;
    }
    float promedio =suma / cantidad; /* por ultimo antes de imprimir el valor resultante se realiza una operacion dentro de la variable promedio entre la
                                 variable suma y la variable cantidad: suma / cantidad.*/

    printf("El promedio de los numeros ingresados es: %.2f\n", promedio); // imprimo la variable promedio con un %.2f para que se puedan motrar 2 decimales

    return 0;
}


/*
#include <stdio.h>

int main()
{
    int cantidad;

    printf("Ingresa el numero de datos que desea ingresar: "); 
    scanf("%d", &cantidad);

    int numeros[cantidad];                        
    printf("Ingrese los %d datos: \n", cantidad); 

    int i = 0; 
    while (i < cantidad) 
    {
        printf("Ingrese numero %d :", i + 1); 
        scanf("%d", &numeros[i]);
        i++;
    }

    float suma = 0.0; 
    i = 0;
    while (i < cantidad)
    {
        suma += numeros[i];
        i++;
    }
    float promedio =suma / cantidad; 

    printf("El promedio de los numeros ingresados es: %.2f\n", promedio);

    return 0;
}
*/