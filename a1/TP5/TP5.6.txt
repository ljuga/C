/*Nombre:Jeremias Luquez
  Legajo: 413860
  28/05/2024
  no vi si habia un limite del vector asi que le agregue uno de 10 elementos 
  */

#include <stdio.h>

int main() {
    int vector[10]; //creo un vector de 10 elementos
    int mayor, segundoMayor;

        printf("Ingrese 10 valores enteros:\n");//le pido al usuario que ingrese 10 valores para comparar y guardarlos en el array vector
        for (int i = 0; i < 10; i++) {
            printf("Valor %d: ", i+1);
            scanf("%d", &vector[i]);
        }

    mayor = vector[0]; // inicializo el primer valor del array es el mayor aunque no lo sea
    segundoMayor = vector[1]; // inicializo que el segundo valor almacenado en el array es el segundo mayor aunque no lo sea

    for (int i = 1; i < 10; i++) {//creo un bucle que recorrera todo el array desde el seegundo valor[1] hasta el ultimo
        if (vector[i] > mayor) { // cada vez se comparara el elemento desde el segundo valor con la variable mayor se desplazara n los valores almacenados en ambas variables
            segundoMayor = mayor; // el segundo mayor ahora es el viejo mayor
            mayor = vector[i]; // se guarda el nuevo mayor
        } else if (vector[i] > segundoMayor) {
            segundoMayor = vector[i]; // actualiza el segundo mayor
        }
    }

    printf("El mayor elemento es: %d\n", mayor);
    printf("El segundo mayor elemento es: %d\n", segundoMayor);

    return 0;
}




/*

#include <stdio.h>

int main() {
    int vector[10]; 
    int mayor, segundoMayor;

        printf("Ingrese 10 valores enteros:\n");
        for (int i = 0; i < 10; i++) {
            printf("Valor %d: ", i+1);
            scanf("%d", &vector[i]);
        }

    mayor = vector[0];
    segundoMayor = vector[1];

    for (int i = 1; i < 10; i++) {
        if (vector[i] > mayor) { 
            segundoMayor = mayor; 
            mayor = vector[i];
        } else if (vector[i] > segundoMayor) {
            segundoMayor = vector[i];
        }
    }

    printf("El mayor elemento es: %d\n", mayor);
    printf("El segundo mayor elemento es: %d\n", segundoMayor);

    return 0;
}

*/