/*Nombre:Jeremias Luquez
  Legajo: 413860
  9/04/2024*/

#include <stdio.h>

int main()
{
    int calificacion[3]; // creo un array para poder almacenar las 3 calificaciones

    printf("Ingrese las calificaciones separadas por una coma: ");

    scanf("%i,%i,%i", &calificacion[0], &calificacion[1], &calificacion[2]); /*guardo las calificaciones en orden en el array con int para guardar numeros enteros
                                                                             |0|1|2| 0 indica el inicio el primer valor ingresado, es decir que para
                                                                             |1|2|3| llamar la primer calificacion se indicaria como 0*/

    for (int i = 0; i < 3; i++) /*creo un bucle para poder usar todos los valores ingresados. Me aseguro de que i sea igual a cero(primer nota)
                                  determino condiciones para que se siga reporduciendo, si i es menor a 3 seguira(i < 3),ademas de que cada vez
                                  se aumentara en 1 el valor de i (i++ = i + 1)*/
    {
        printf("la calificacion del estudiante n%d es: ", i + 1); /*para poder determinar que alumno es en el momento de imprimir el mensaje, de una manera sencilla
                                                                    uso el mismo valor de i(0) sumandole 1*/
        if (calificacion[i] > 100){  //suponiendo que las notas tienen como maximo un 100, limito el maximo que se ingreso para determinar si es posible continua
            printf("Nota invalida\n");
        }
        else if (calificacion[i] > 90)                                 // creo condiciones a cumplir para cualquiera de lass 3 calificaciones en el bucle
        {
            printf("Sobresaliente\n");
        }
        else if (calificacion[i] >= 70)
        {
            printf("Muy Bueno\n");
        }
        else if (calificacion[i] >= 50)
        {
            printf("Bueno\n");
        }
        else
        {
            printf("Reprobado\n");
        }
    }

    return 0;
}

/*
#include <stdio.h>

int main()
{
    int calificacion[3];

    printf("Ingrese las calificaciones separadas por una coma: ");

    scanf("%i,%i,%i", &calificacion[0], &calificacion[1], &calificacion[2]);

    for (int i = 0; i < 3; i++) 
    {
        printf("la calificacion del estudiante n%d es: ", i + 1); 

        if (calificacion[i] > 100){
            printf("Nota invalida\n");
        }

        else if (calificacion[i] > 90)
        {
            printf("Sobresaliente\n");
        }
        else if (calificacion[i] >= 70)
        {
            printf("Muy Bueno\n");
        }
        else if (calificacion[i] >= 50)
        {
            printf("Bueno\n");
        }
        else
        {
            printf("Reprobado\n");
        }
    }

    return 0;
}*/