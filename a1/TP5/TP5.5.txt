/*Nombre:Jeremias Luquez
  Legajo: 413860
  28/05/2024
  creo que no entendi muy bien la consigna, decia guardar los impares y pares en diferentes array pero no que hacer con ellos, yo agregue que se impriman los valores por las dudas
  */

#include <stdio.h>

int main() { 
    int limite;//creo la variable limite para tener un numero maximo con el cual trabajar
    
    printf("Ingresa un numero: ");//le pido al usuario que ingrese un valor a 'separar' en pares e impares
    scanf("%d", &limite);    
    
    int pares[limite/2 ];//creo un array para almacenar los valores que se determinen pares
    int impares[limite/2];//creo un array para almacenar los valores que se determinen impares
    int contador_pares = 0;//creo dos variables para poder situar el numero dentro del array
    int contador_impares = 0;

    printf("Numeros pares hasta %d: ", limite);

    for(int i = 2; i <= limite; i += 2) {//si el valor de i es igual a 2 se le sumaran 2 hasta llegar al limite o lo mas cercano. Ej i=2 +2 =4 +2 =6 etc siempre pares
        printf("%d ", i);
        pares[contador_pares] = i;//se agrega el numero al array pares con la posicion 0 luego se aumenta en 1 asi se puede agregar proximos valores sim remplazar los existentes
        contador_pares++;
    }
    
    printf("\nNumeros impares hasta %d: ", limite);

    for(int i = 1; i <= limite; i += 2) {//si el valor de i es igual a 1 se le sumaran 2 hasta llegar al limite o lo mas cercano. Ej i=1 +2 =3 +2 =5 etc siempre impares
        printf("%d ", i);
        impares[contador_impares] = i;//se agrega el numero al array impares con la posicion 0 luego se aumenta en 1 asi se puede agregar proximos valores sim remplazar los existentes
        contador_impares++;
    }
    
    return 0;
}

/*
#include <stdio.h>

int main() { 
    int limite;
    
    printf("Ingresa un numero: ");
    scanf("%d", &limite);    
    
    int pares[limite/2 ];
    int impares[limite/2];
    int contador_pares = 0;
    int contador_impares = 0;

    printf("Numeros pares hasta %d: ", limite);

    for(int i = 2; i <= limite; i += 2) {
        printf("%d ", i);
        pares[contador_pares] = i;
        contador_pares++;
    }
    
    printf("\nNumeros impares hasta %d: ", limite);

    for(int i = 1; i <= limite; i += 2) {
        printf("%d ", i);
        impares[contador_impares] = i;
        contador_impares++;
    }
    
    return 0;
}
*/