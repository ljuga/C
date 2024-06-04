/*Nombre:Jeremias Luquez
  Legajo: 413860
  14/05/2024**/

#include <stdio.h>

int main() {
    int numeros[10];// creo un array con un limite para 10 numeros
    int numMin;


    for (int i = 0; i < 10; i++) {// uso un bucle para almacenar los valores ingresador en el array numeros[]
        printf("Valor %d: ", i + 1);// se imprimira un numero al lado del mensaje valor para saber en que orden va
        scanf("%d", &numeros[i]);


        if (i == 0 || numeros[i] < numMin) {//se compara numeros con la variable numMin para determinar si es menor al numero almacenado
            numMin = numeros[i];
        }
    }

    printf("El numero mas bajo es: %d\n", numMin); // se imprime el ultimo valor que quedo almacenado en numMIn 

    return 0;
}

/*
#include <stdio.h>

int main() {
    int numeros[10];
    int numMin;


    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &numeros[i]);


        if (i == 0 || numeros[i] < numMin) {
            numMin = numeros[i];
        }
    }

    printf("El numero mas bajo es: %d\n", numMin); 
    return 0;
}
*/