/*Nombre:Jeremias Luquez
  Legajo: 413860
  8/04/2024

  Queria hacerlo lo mas compacto posible pero no tengo idea como
*/

#include <stdio.h>

int main()
{
    int mes;
    printf("ingrese el mes (1-12): "); // pido al usuario que ingrese un numero del 1-12
    scanf("%i", &mes);                 // almaceno el valor que se utilizara para determinar que caso se reproducira en el switch

    switch (mes)                       /*creo diferentes casos para poder determinar la cantidad dias que tiene el mes. La expresion que dictaminara el 
                                       caso que se usara es el int mes. Los casos estan en orden de los meses 1-enero 5-mayo etc.*/
    {
    case 1:                                    //en caso de que el numero almacenado en mes coincida con el caso se devolvera el mensaje de los dias junto con el nombre del mes 
        printf("Enero tiene 31 dias\n");
        break;
    case 2:
        printf("Febrero tiene 28/29 dias\n");
        break;
    case 3:
        printf("Marzo tiene 31 dias\n");
        break;
    case 4:
        printf("Abril tiene 30 dias\n");
        break;
    case 5:
        printf("Mayo tiene 31 dias\n");
        break;
    case 6:
        printf("Junio tiene 30 dias\n");
        break;
    case 7:
        printf("Julio tiene 31 dias\n");
        break;
    case 8:
        printf("Agosto tiene 31 dias\n");
        break;
    case 9:
        printf("Septiembre tiene 30 dias\n");
        break;
    case 10:
        printf("Octubre tiene 31 dias\n");
        break;
    case 11:
        printf("Noviembre tiene 30 dias\n");
        break;
    case 12:
        printf("Diciembre tiene 31 dias\n");
        break;
    default:
        printf("Numero de mes no valido\n"); // en caso de ingresar un numero erroneo segun los requisitos requeridos se devolvera un mensaje de invalidacion
        break;
    }
    return 0;
}



/*

#include <stdio.h>

int main()
{
    int mes;
    printf("ingrese el mes (1-12): ");
    scanf("%i", &mes);
     
    switch (mes)                       
    {
    case 1:                                  
        printf("Enero tiene 31 dias\n");
        break;
    case 2:
        printf("Febrero tiene 28/29 dias\n");
        break;
    case 3:
        printf("Marzo tiene 31 dias\n");
        break;
    case 4:
        printf("Abril tiene 30 dias\n");
        break;
    case 5:
        printf("Mayo tiene 31 dias\n");
        break;
    case 6:
        printf("Junio tiene 30 dias\n");
        break;
    case 7:
        printf("Julio tiene 31 dias\n");
        break;
    case 8:
        printf("Agosto tiene 31 dias\n");
        break;
    case 9:
        printf("Septiembre tiene 30 dias\n");
        break;
    case 10:
        printf("Octubre tiene 31 dias\n");
        break;
    case 11:
        printf("Noviembre tiene 30 dias\n");
        break;
    case 12:
        printf("Diciembre tiene 31 dias\n");
        break;
    default:
        printf("Numero de mes no valido\n");
        break;
    }
    return 0;
}*/