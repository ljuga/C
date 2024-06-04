/*Nombre:Jeremias Luquez
  Legajo: 413860
  21/05/numero24
*/

#include <stdio.h>

void nota(int *notas, int numero) // creo una funcion para que el usuario pueda ingresar las notas ademas de ingresar la variable numero para saber en que rango trabajara el bucle
{
    for (int i = 0; i < numero; i++)
    {
        printf("Ingrese la nota n%d: ", i + 1);
        scanf("%i", &notas[i]);
    }
}
void lista(int *notas, int numero) // creo una funcion para que el usuario pueda ver la lista de las notas
{
    for (int i = 0; i < numero; i++) // para imprimir la lista simplemente creo un bucle que se repita numero veces y cada vez imprima un numero del array notas
    {
        printf("Nota numero %d: %i \n", i + 1, notas[i]);
    }
}   
void promedio(int *notas, int numero) // creo una funcion para que el usuario pueda promediar las notas
{
    int suma = 0;
    for (int i = 0; i < numero; i++) // para sacar el promedio creo una variable suma que almacenara los valores sumados de la variable notas
    {
        suma += notas[i]; // cada vez que el bucle se repita aumentando en 1 el orden de notas se sumara los valores de notas
    }
    float promedio = (float)suma / numero; // para sacar el promedio final es simplemente dividir la variable suma con el numero de notas almacenadas en este caso sera el numero almacenado en la variable numero
    printf("El Promedio de las notas es: %f\n", promedio);
}

void menor(int *notas, int numero) // creo una funcion para que sacar el numero menor de las notas
{
    int menor = notas[0];
    for (int i = 1; i < numero; i++) // para sacar el menor numero con un bucle comparo cada uno de los numero de notas y los guardo en la variable menor
    {
        if (notas[i] < menor) //si notas[i] menor a al numero almacenado en la variable menor
        {
            menor = notas[i]; // menor se remplaza con notas[i]
        }
    }
    printf("El numero menor de las notas es: %i\n", menor);
}
void mayor(int *notas, int numero) // creo una funcion para que sacar el numero mayor de las notas
{
    int mayor = notas[0];
    for (int i = 1; i < numero; i++) // para sacar el menor numero con un bucle comparo cada uno de los numero de notas y los guardo en la variable mayor
    {
        if (notas[i] > mayor) //si notas[i] mayor   a al numero almacenado en la variable mayor
        {
            mayor = notas[i]; // mayor se remplaza con notas[i]
        }
    }
    printf("El numero mayor de las notas es: %i\n", mayor);
}
int main() // creo la funcion main para que el usuario pueda operar desde aca las demas funciones seleccionando las diferentes opciones.
{
    int numero; /* creo un bucle para determinar que el usuario ingrese un numero dentro del rango requerido (maximo 100) y asi poder almacenarla en la
                 variable numero que sera utilizado por todas las funciones*/
    do
    {
        printf("Ingrese un numero entre 0 y 100: ");
        scanf("%d", &numero);

        if (numero < 0 || numero > 100)
        {
            printf("Numero fuera de rango. Intente nuevamente.\n");
        }
    } while (numero < 0 || numero > 100);// si el numero es menor a cero o mayor a 100 el bucle seguira hasta ingresar un valor correcto

    printf("Numero ingresado correctamente: %d\n", numero);

    int notas[numero];
    int opcion; // una variable para poder determinar que caso utilizar

    nota(notas, numero); // creo diferentes opciones para que el usuario pueda seleccionar que quiere hacer ademas de poder volver en caso de poner mal el numero o querer hacer mas de un calculo
    do
    {
        printf("Seleccione una opcion:\n");
        printf("1. Listar notas\n");
        printf("2. Calcular promedio\n");
        printf("3. Calcular menor\n");
        printf("4. Calcular mayor\n");
        printf("5. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion); // guardo laopcion que usuario ingreso

        switch (opcion) // llamo al numero almacenado en la variable opcion
        {
        case 1:
            lista(notas, numero);
            break;
        case 2:
            promedio(notas, numero);
            break;
        case 3:
            menor(notas, numero);
            break;
        case 4:
            mayor(notas, numero);
            break;
        case 5:
            printf("Saliendo...\n");
            break;
        default:
            printf("Opcion invslida. Intente de nuevo.\n");
            break;
        }
    } while (opcion != 5); // repite el codigo hasta que se seleccion la opcion de salir en este caso 5

    return 0;
}




/*


#include <stdio.h>

void nota(int *notas, int numero) 
{
    for (int i = 0; i < numero; i++)
    {
        printf("Ingrese la nota n%d: ", i + 1);
        scanf("%i", &notas[i]);
    }
}
void lista(int *notas, int numero)
{
    for (int i = 0; i < numero; i++)
    {
        printf("Nota numero %d: %i \n", i + 1, notas[i]);
    }
}   
void promedio(int *notas, int numero)
{
    int suma = 0;
    for (int i = 0; i < numero; i++)
    {
        suma += notas[i];
    }
    float promedio = (float)suma / numero;  
    printf("El Promedio de las notas es: %f\n", promedio);
}

void menor(int *notas, int numero) 
{
    int menor = notas[0];
    for (int i = 1; i < numero; i++)
    {
        if (notas[i] < menor) 
        {
            menor = notas[i]; 
        }
    }
    printf("El numero menor de las notas es: %i\n", menor);
}
void mayor(int *notas, int numero) 
{
    int mayor = notas[0];
    for (int i = 1; i < numero; i++) 
    {
        if (notas[i] > mayor)
        {
            mayor = notas[i];
        }
    }
    printf("El numero mayor de las notas es: %i\n", mayor);
}
int main()
{
    int numero; 
    do
    {
        printf("Ingrese un numero entre 0 y 100: ");
        scanf("%d", &numero);

        if (numero < 0 || numero > 100)
        {
            printf("Numero fuera de rango. Intente nuevamente.\n");
        }
    } while (numero < 0 || numero > 100);

    printf("Numero ingresado correctamente: %d\n", numero);

    int notas[numero];
    int opcion; 

    nota(notas, numero); 
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
            lista(notas, numero);
            break;
        case 2:
            promedio(notas, numero);
            break;
        case 3:
            menor(notas, numero);
            break;
        case 4:
            mayor(notas, numero);
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