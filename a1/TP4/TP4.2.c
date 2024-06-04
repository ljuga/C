/*Nombre:Jeremias Luquez
  Legajo: 413860
  14/05/2024*/
#include <stdio.h>

int main() {
    int limite; //determino la variable limite que utilizare para determinar cuanto durara el bucle

    printf("Ingrese el numero limite: ");// solicito al usuario que ingrese el valor de limite que desee
    scanf("%d", &limite);

    printf("Los numeros impares entre 0 y %d son:\n", limite);//imprimo un mensaje demostrativo del los valores esperados por el usuario
    for (int i = 1; i <= limite ; i += 2) { /*determino que el valor inicial de i va a ser 1 asi se facilitara el imprimir los valores
                                             haciendo que el primer valor como se inicia desde cero sea 1 (el primer impar) luego 
                                             se ira sumando de a 2 hasta llegar al valor limite o un numero menor ya que i=1 y se suma 
                                             i+=2 siempre sera impar ej 3+=2 = 5+=2 = 7+=2...i+=2 <=limite*/
        printf("%d\n", i);//imprimo cada valor que se obtiene de la suma apartir del 1 al no ser necesario una verificacion u operacion matematica
    }

    return 0;
}

/*
 #include <stdio.h>

int main() {
    int limite;

    printf("Ingrese el numero limite: ");
    scanf("%d", &limite);

    printf("Los numeros impares entre 0 y %d son:\n", limite);
    for (int i = 1; i <= limite ; i += 2) { 
        printf("%d\n", i);
    }
    return 0;
}
*/