/*Nombre:Jeremias Luquez 
  Legajo: 413860 
  30/03/2024
  Detalles: Estoy utilizando Visual Studio code no se si se tendra algun problema, si es el caso puedo utilizar otro ide
  dejo el codigo sin comentarios abajo */

#include <stdio.h>

const double pi = 3.14159; /* Utilizo const porque vi que era mejor para valores que no se tengan que modificar durante el funcionamiento,
                              double para poder tener una mayor precision con los datos */
int main()
{
    int radio;
    printf("Ingrese el radio del circulo: "); /* Aca estoy declarando una variable que almacenara numeros enteros.
                                                 Le pido al usuario que ingrese un numero, en este caso el radio del circulo
                                                 no estoy varificando si el radio es valido (por ejemplo: negativo) */
    scanf("%d", &radio);

    printf("El area del circulo es: %.3f\n", pi * (radio * radio)); /* Agrego %f para poder imprimir un valor de tipo double. Utilizo un .3 dentro de
                                                                       %f para poder limitar los decimales que se muestran en el resultado final.
                                                                       Para sacar el area uso la formula π × radio^2, de una manera simple, es la
                                                                       variable que defini anteriormente "pi", y el radio que solicite multiplicado por si mismo,
                                                                       que es igual a elevarlo al cuadrado*/

    return 0;
}





/* 
#include <stdio.h>

const double pi = 3.14159;
int main()
{
    int radio;
    printf("Ingrese el radio del circulo: ");
    scanf("%d", &radio);

    printf("El area del circulo es: %.3f\n", pi * (radio * radio));

    return 0;
}

*/