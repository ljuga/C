/*Nombre:Jeremias Luquez
  Legajo: 413860
  28/05/2024*/

#include <stdio.h>

void contarDuplicados(int elementos[]) {  //Creo una funcion que recibe la variable elementos  
    int frecuencia[99999] = {0}; //creo un array con un valor grande para que se pueda usar un rango mas alto para contarlos, en resumen se revisaran todos los valores des 0 a 99999
    int maxValor = 0; //creo una variable para poder limitar cuanto funcionara el bucle para los duplicados

    for (int i = 0; i < 10; i++) {//en este bucle se recorre todo el array con los elementos que se ingresaron
        frecuencia[elementos[i]]++;/*por ej si el primer numero es 3 cada vez que se encuentre con el mismo numero se sumara 1 al valor del array en la misma posicion
                                     frecuencia [0,0,0,0,0,0,0,0,0,0] , elementos[1,2,3,4,2,1,2,3,2,3]
                                     frecuencia[2(valor=1),4(valor=2),3(valor=3),1(valor=4),0,0,0,0,0,0] los 0 como no hay numeros suficientes en caso de haber 
                                     10 numeros diferentes todos los espacios en frecuencia se "llenarian"*/
        if (elementos[i] > maxValor) {//si el valor de elementos es mayor al maxValor se remplazara en la variable maxValor
        maxValor = elementos[i] + 1;
        }
    }
    int duplicados = 0;//creo una variable para mostrar el numero de elementos repetidos 
    for (int i = 0; i < maxValor; i++) {
        if (frecuencia[i] > 1) {//para solo mostrar los valores del array frecuencia por arriba de 1 asi no muestra los valores que solo aparecieron una vez ademas de no mostrar los ceros
            duplicados++;
            printf("Elemento %d aparece %d veces.\n", i, frecuencia[i]);//imprimo el numero(elemento) y las veces en total que se repitieron
        }
    }

    printf("Total de elementos duplicados: %d\n", duplicados);//imprimo la cantidad de numeros duplicados(valor del numero, no todos los numeros individualmente duplicados)
}

int main() {
    int elementos[10];// creo el array principal donde el usuario almacenara los elementos que quiera(numeros), y se utilizara en la funcion contraDuplicados
    for (int i = 0; i < 10; i++) //un bucle simple para ingresar los valores y se guarden en el array anterior
    {
        printf("Ingrese numero N %d: ", i + 1);
        scanf("%i", &elementos[i]);
    }

    contarDuplicados(elementos);//llamo a la funcion contarDuplicados enviandole el array con los elementos guardados 

    return 0;
}



/*
#include <stdio.h>

void contarDuplicados(int elementos[]) {
    int frecuencia[99999] = {0};
    int maxValor = 0;

    for (int i = 0; i < 10; i++) {
        frecuencia[elementos[i]]++;
        if (elementos[i] > maxValor) {
            maxValor = elementos[i];
        }
    }

    int duplicados = 0;
    for (int i = 0; i < maxValor; i++) {
        if (frecuencia[i] > 1) {
            duplicados++;
            printf("Elemento %d aparece %d veces.\n", i, frecuencia[i]);
        }
    }

    printf("Total de elementos duplicados: %d\n", duplicados);
}

int main() {
    int elementos[10];
    for (int i = 0; i < 10; i++) {
        printf("Ingrese numero N %d: ", i + 1);
        scanf("%i", &elementos[i]);
    }

    contarDuplicados(elementos);

    return 0;
}
*/


