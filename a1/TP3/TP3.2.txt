/*Nombre:Jeremias Luquez
  Legajo: 413860
  16/04/2024
  como este ejecicio me resulto mas facil que el anterior queria intetar encapsular las diferentes funciones, cualquier cosa dejo el
  codigo abajo sin separar las funciones
  en un inicio lo hice con for pero como no sabia si el ultimo ejecicio o todos se tenian que hacer usando while lo modifique*/

#include <stdio.h>

int cantidadBolsas() // creo una Funcion para almacenar la cantidad de bolsas que se tendran que comprobar mas adelante
{
    int cantidad;
    printf("Ingrese la cantidad de bolsas a comprobar: ");
    scanf("%d", &cantidad);

    return cantidad;
}

void almacenarBolsas(int cantidad, int bolsas[]) /* creo otra funcion para almacenar las bolsas ingresando la variable cantidad para poder limitar cuantas bolsas seran
                                                    uso void ya que no espero recibir ningún valor de vuelta. simplemente ejecuta la tarea que se le ha asignado,
                                                    almacenar los pesos de las bolsas en el array proporcionado.*/
{
    int i = 0;
    while( i < cantidad) /*para saber el orden de los numeros que estas ingresando utilizo, i + 1 para transformar el primer valor 0 en 1 e ir
                                        sumandole por cada vez que se repita el bucle*/
    {
        printf("Ingrese numero %d :", i + 1);
        scanf("%d", &bolsas[i]);
        i++;
    }
}
int comprobarPeso(int cantidad, int bolsas[]) // la ultima funcion es para comprobar su peso, ingresando los datos que se consiguieron en las anteriores funciones
{
    int i = 0;
    while ( i < cantidad)
    {
        printf("Bolsa N%d :", i + 1); /*para saber el orden de las bolsas que se estan pesando, uso i + 1 para transformar el primer valor 0 en 1 e ir
                                       sumandole por cada vez que se repita el bucle*/

        if (bolsas[i] >= 998 && bolsas[i] <= 1005) // determino el rango de peso que se utilizara para ver si la bolsa cumple el requisito de peso
        {
            printf("El peso de la bolsa %ig esta en el rango requerido \n", bolsas[i]);
        }
        else if (bolsas[i] < 998) // si el peso de la bolsa es de menor a 998 imprimira el siguiente mensaje
        {
            printf("El peso de la bolsa %ig es MENOR al requerido\n", bolsas[i]);
        }
        else if (bolsas[i] > 1005) // si el peso de la bolsa es de mayor a 1005 imprimira el siguiente mensaje
        {
            printf("El peso de la bolsa %ig es MAYOR al requerido\n", bolsas[i]);
        }
        i++;
    }
    return 0;
}
int main() // en esta funcion basicamente se encarga de repartir los datos y darles orden
{
    int cantidad = cantidadBolsas();//se crea una variable para almacenar resultante de la funcion cantidadBolsas
    int bolsas[cantidad];
    almacenarBolsas(cantidad, bolsas);/*se llama a la funcion almacenarBolsas para que se ingresen los pesos de cada bolsa,
                                       puede acceder y modificar los elementos de bolsas[]*/
    comprobarPeso(cantidad, bolsas);// se llama a la funcion comprobar peso y se verifica si se cumplen los requisitos
    return 0;
}

/*#include <stdio.h>

int main()
{

    int cantidad;
    printf("cantidad: ");
    scanf("%d", &cantidad);

    int bolsas[cantidad];

    for (int i = 0; i < cantidad; i++)
    {
        printf("Ingrese numero %d :", i + 1);
        scanf("%d", &bolsas[i]);
    }

    for (int i = 0; i < cantidad; i++)
    {
        printf("Bolsa N%d :", i + 1);

        if (bolsas[i] >= 998 && bolsas[i] <= 1005)
        {
            printf("El peso de la bolsa %ig esta en el rango requerido \n", bolsas[i]);
        }
        else if (bolsas[i] < 998)
        {
            printf("El peso de la bolsa %ig es MENOR al requerido\n", bolsas[i]);
        }
        else if (bolsas[i] > 1005)
        {
            printf("El peso de la bolsa %ig es MAYOR al requerido\n", bolsas[i]);
        }
    }
    return 0;
}
*/