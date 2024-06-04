/*Nombre:Jeremias Luquez
  Legajo: 413860
  16/04/2024*/

#include <stdio.h>

int main()
{

    // creo diferentes variables para almacenar los valores finales
    int contador = 0;        // contador guardara cuantas veces se repitio el bucle
    int contMayor7 = 0;      // contMayor7 guardara los valores que dentro del bucle determine que es mayor a 7
    int contMenorIgual3 = 0; // contMenorigual3 guardara los valores que dentro del bucle determine que es menor o igual a 3
    int nota;                // nota se usara para poder ingresar los valores de las notas dentro del bucle

    do
    {
        printf("Ingrese la nota %d (entre 0 y 10): ", contador + 1);
        scanf("%d", &nota);

        if (nota >= 0 && nota <= 10)
        { /*se colocan dos requisitos para que se inicie este if que es si nota es mayor o igual a cero(nota >= 0)
            ademas(&&) si nota es menor o igual a diez(nota <= 10) uso && para que si o si se tengan que cumplir esas dos condiciones*/
            contador++;

            if (nota > 7)
            { // si la nota es mayor a 7 se suma un uno al valor almacenado en contMayor7 (contMayor7++ = contMayor + 1)
                contMayor7++;
            }
            else if (nota <= 3)
            {
                contMenorIgual3++; // si la nota es menor o igual a 3 se suma un uno al valor almacenado en contMenorIgual3 (contMenorIgual3++  = contMenorIgual3  + 1)
            }
        }
        else
        { // en caso de que la nota no este en ese rango se imprimira un mensaje de eror
            printf("La nota ingresada no esta dentro del rango permitido. vuelva a intentarlo.\n");
        }
    } while (contador < 45); // mientras el valor de contador sea menor a 45 el bucle seguira funcionando

    int contEntre3y7 = contador - (contMenorIgual3 + contMayor7); /*para determinar de una forma sensilla cuantos cuantos numeros estan entre 3 y 7;
                                                                   con el contador, que tiene que ser igual a 45, le resto la suma de las variables contMenorIgual3 contMayor7
                                                                   en caso de no haber ningun valor entre 3 y 7 sera 0 contador 45 - suma de variables 45*/

    printf("Cantidad de notas entre 3 y 7: %d\n", contEntre3y7);
    printf("Cantidad de notas mayores que 7: %d\n", contMayor7);
    printf("Cantidad de notas menores o iguales a 3: %d\n", contMenorIgual3);

    return 0;
}

/*
#include <stdio.h>

int main() {

    int contador = 0;
    int contMayor7 = 0;
    int contMenorIgual3 = 0;
    int nota;

    do {
        printf("Ingrese la nota %d (entre 0 y 10): ", contador + 1);
        scanf("%d", &nota);

        if (nota >= 0 && nota <= 10) {
            contador++;

            if (nota > 7) {
                contMayor7++;
            } else if (nota <= 3) {
                contMenorIgual3++;
            }
        } else {
            printf("La nota ingresada no esta dentro del rango permitido. vuelva a intentarlo.\n");
        }
    } while (contador < 45);

    int contEntre3y7 = contador - (contMenorIgual3 + contMayor7);

    printf("Cantidad de notas entre 3 y 7: %d\n", contEntre3y7);
    printf("Cantidad de notas mayores que 7: %d\n", contMayor7);
    printf("Cantidad de notas menores o iguales a 3: %d\n", contMenorIgual3);


    return 0;

    */