/*Nombre:Jeremias Luquez
  Legajo: 413860
  21/05/2024
*/

#include <stdio.h>

void nota(int *notas) // creo una funcion para que el usuario pueda ingresar las notas
{
    for (int i = 0; i < 20; i++)
    {
        printf("Ingrese la nota n%d: ", i + 1);
        scanf("%i", &notas[i]);
    }
}
void lista(int *notas) // creo una funcion para que el usuario pueda ver la lista de las notas
{
    for (int i = 0; i < 20; i++) //para imprimir la lista simplemente creo un bucle que se repita 20 veces y cada vez imprima un numero del array notas
    {
        printf("Nota numero %d: %i \n", i + 1, notas[i]);
    }
}
void promedio(int *notas) // creo una funcion para que el usuario pueda promediar las notas
{
    int suma = 0;
    for (int i = 0; i < 20; i++)//para sacar el promedio creo una variable suma que almacenara los valores sumados de la variable notas
    {
        suma += notas[i]; //cada vez que el bucle se repita aumentando en 1 el orden de notas se sumara los valores de notas
    }
    float promedio = (float)suma / 20; // para sacar el promedio final es simplemente dividir la variable suma con el numero de notas almacenadas en este caso 20
    printf("El Promedio de las notas es: %f\n", promedio);
}

void menor(int *notas) // creo una funcion para que sacar el numero menor de las notas
{
    int menor = 0;
    for (int i = 0; i < 20; i++) // para sacar el menor numero con un bucle comparo cada uno de los numero de notas y los guardo en la variable menor
    {
        if (i == 0 || notas[i] < menor)// si i siendo igual a cero y notas[i] menor a al numero almacenado en la variable menor
        {
            menor = notas[i]; // menor se remplaza con notas[i]
        }
    }
    printf("El numero menor de las notas es: %i\n", menor);
}
void mayor(int *notas) // creo una funcion para que sacar el numero mayor de las notas
{
    int mayor = 0;
    for (int i = 0; i < 20; i++)// para sacar el menor numero con un bucle comparo cada uno de los numero de notas y los guardo en la variable mayor
    {
        if (i == 0 || notas[i] > mayor)// si i siendo igual a cero y notas[i] menor a al numero almacenado en la variable mayor
        {
            mayor = notas[i];// mayor se remplaza con notas[i]
        }
    }
    printf("El numero menor de las notas es: %i\n", mayor);
}
int main() // creo la funcion main para que el usuario pueda operar desde aca las demas funciones seleccionando las diferentes opciones.
{
    int notas[20] = {0};
    int opcion; // una variable para poder determinar que caso utilizar 

    nota(notas); // creo diferentes opciones para que el usuario pueda seleccionar que quiere hacer ademas de poder volver en caso de poner mal el numero o querer hacer mas de un calculo
    do
    {
        printf("Seleccione una opcion:\n");
        printf("1. Listar notas\n");
        printf("2. Calcular promedio\n");
        printf("3. Calcular menor\n");
        printf("4. Calcular mayor\n");
        printf("5. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);//guardo laopcion que usuario ingreso

        switch (opcion)//llamo al numero almacenado en la variable opcion
        {
        case 1:
            lista(notas);
            break;
        case 2:
            promedio(notas);
            break;
        case 3:
            menor(notas);
            break;
        case 4:
            mayor(notas);
            break;
        case 5:
            printf("Saliendo...\n");
            break;
        default:
            printf("Opcion invslida. Intente de nuevo.\n");
            break;
        }
    } while (opcion != 5); //repite el codigo hasta que se seleccion la opcion de salir en este caso 5

    return 0;
}






/*
#include <stdio.h>

void nota(int *notas)
{
    for (int i = 0; i < 20; i++)
    {
        printf("Ingrese la nota n%d: ", i + 1);
        scanf("%i", &notas[i]);
    }
}
void lista(int *notas)
{
    for (int i = 0; i < 20; i++)
    {
        printf("Nota numero %d: %i \n", i + 1, notas[i]);
    }
}
void promedio(int *notas)
{
    int suma = 0;
    for (int i = 0; i < 20; i++)
    {
        suma += notas[i];
    }
    float promedio = (float)suma / 20; 
    printf("El Promedio de las notas es: %f\n", promedio);
}

void menor(int *notas)
{
    int menor = 0;
    for (int i = 0; i < 20; i++) 
    {
        if (i == 0 || notas[i] < menor)
        {
            menor = notas[i]; 
        }
    }
    printf("El numero menor de las notas es: %i\n", menor);
}
void mayor(int *notas) 
{
    int mayor = 0;
    for (int i = 0; i < 20; i++)
    {
        if (i == 0 || notas[i] > mayor)
        {
            mayor = notas[i];
        }
    }
    printf("El numero menor de las notas es: %i\n", mayor);
}
int main() 
{
    int notas[20] = {0};
    int opcion;  

    nota(notas);
    do
    {
        printf("Seleccione una opcion:\n");
        printf("1. Listar notas\n");
        printf("2. Calcular promedio\n");
        printf("3. Calcular menor\n");
        printf("4. Calcular mayor\n");
        printf("5. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            lista(notas);
            break;
        case 2:
            promedio(notas);
            break;
        case 3:
            menor(notas);
            break;
        case 4:
            mayor(notas);
            break;
        case 5:
            printf("Saliendo...\n");
            break;
        default:
            printf("Opcion invslida. Intente de nuevo.\n");
            break;
        }
    } while (opcion != 5);

    return 0;
}

*/