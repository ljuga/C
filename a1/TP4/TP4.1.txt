/*Nombre:Jeremias Luquez
  Legajo: 413860
  14/05/2024*/

#include <stdio.h>

int main()
{
    int numero, suma = 0 ;/* creo dos variables diferentes en la misma linea,ambos se les 
                            determino que su valor inicial es cero para poder operar con las mismas*/

    printf("Ingresa 10 numeros a sumar:\n");

    for (int i = 0; i < 10; i++) /*creo un bucle para poder ingresar los 10 valores de una forma ordenada y clara.
                                   determino que i sera igual a 0 como primer numero y que se detendra antes de llegar a 10
                                   haciendo que los numeros de orden sean 0,1,2,3,4,5,6,7,8,9 ya que no se detendra en 10 si no 
                                   el ultimo numero menor a 10 de esta suma.*/
    {
        printf("Numero %d: ", i + 1); /*solicito ingresar el valor de un numero para poder operar mas adelante
                                        para poder mostrar en que numero ingresado va el usuario a i(inicialmente cero) le sumo 1
                                        (quedando como primer valor representado como 1)y por cada bucle se le sumara 
                                        ej bucle numero 5 i=5 i+1 Numero 6 */
        scanf("%i", &numero);//guardo el numero en la variable numero, a lo largo del bucle se ira remplazando

        suma += numero;/*con todos los datos que se recibieron del bucle se suman a la variable suma definida anteriormente
                         y a lo largo de lo que dure se le sumara la variable numero (su valor varia dependendiendo por cual numero fue remplazado)*/
    }
    printf("La suma de los 10 numeros es: %i\n", suma);/*por ultimo llamo a la variable suma para imprimir su ultimo valor guardado que sera el 
                                                        resultado de la suma total del bucle for*/
    return 0;
}


/*
#include <stdio.h>

int main()
{
    int numero, suma = 0.0 ;

    for (int i = 0; i < 10; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%i", &numero);

        suma += numero;
    }
    printf("La suma de los 10 numeros es: %i\n", suma);
    return 0;
}*/