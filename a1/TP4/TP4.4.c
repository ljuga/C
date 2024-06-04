/*Nombre:Jeremias Luquez
  Legajo: 413860
  14/05/2024*/

#include <stdio.h>

int main() {
    int numeros[10]; // creo un array con un limite para 10 numeros
    int numMin;
    //modificacion numero mayor
    int numMax;

    for (int i = 0; i < 10; i++) {// uso un bucle para almacenar los valores ingresador en el array numeros[]
        printf("Valor %d: ", i + 1);// se imprimira un numero al lado del mensaje valor para saber en que orden va
        scanf("%d", &numeros[i]);

        if (i == 0 || numeros[i] < numMin) {//se compara numeros con la variable numMin para determinar si es menor al numero almacenado
            numMin = numeros[i];
        }
        //modificacion numero mayor
        if (i == 0 || numeros[i] > numMax) {
            numMax = numeros[i];
        }
    }
    printf("El numero mas bajo es: %d\n", numMin);// se imprime el ultimo valor que quedo almacenado en numMIn 
    printf("El numero mas alto es: %d\n", numMax);

    //modificacion promedio
    //aca reutilizo una parte del codigo del trabajo practico numero 3 actividad 1
    float suma = 0.0;  // creo una variable suma para almacenar el valor resultante de sumar los valores almacenados en el array
    for (int i = 0; i < 10; i++) {
        suma += numeros[i];
    }
    float promedio =suma / 10; /* por ultimo antes de imprimir el valor resultante se realiza una operacion dentro de la variable promedio entre la
                                 variable suma y la variable cantidad: suma / cantidad.*/

    
    printf("El promedio de los numeros ingresados es: %.2f\n", promedio); // imprimo la variable promedio con un %.2f para que se puedan motrar 2 decimales
    return 0;
}



/*

#include <stdio.h>

int main() {
    int numeros[10];
    int numMin;
    int numMax;


    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &numeros[i]);

        if (i == 0 || numeros[i] < numMin) {
            numMin = numeros[i];
        }
        if (i == 0 || numeros[i] > numMax) {
            numMax = numeros[i];
        }
    }
    printf("El numero mas bajo es: %d\n", numMin);
    printf("El numero mas alto es: %d\n", numMax);

    float suma = 0.0;
    int i = 0;
    while (i < 10) {
        suma += numeros[i];
        i++;
    }
    float promedio =suma / 10;
    
    printf("El promedio de los numeros ingresados es: %.2f\n", promedio);
    return 0;
}

*/