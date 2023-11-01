#include <stdio.h>

int main(void)
{

    int cantidad;
    int a = 0;
    int numero;
    float positivos = 0, negativos = 0, ceros = 0;
    float mayorProm, menorProm, igualProm;
    /* Estas son las variables que vamos a utilizar y necesitamos variables float porque el promedio es decimal */

    do
    {
        printf("Escriba la cantidad de numeros que desea escribir mayor a 0.\n");
        scanf("%d", &cantidad);
    } while (cantidad <= 0);

    /*Actualizamos este comentario y controlamos el valor que ingresa el usuario para que sea mayor 7. */

    while (a < cantidad)
    {
        printf("Ingrese un numero.\n", a);
        scanf("%d", &numero);

        if (numero > 0)
        {
            positivos++;
        }
        else if (numero == 0)
        {
            ceros++;
        }
        else
        {
            negativos++;
        }

        a++;
    }
/* Este ciclo while se encarga de que el usuario ingrese la cantidad de numeros que pidio antes y dependiendo si es mayor, menor o igual a 0 se agrega a un contador respectivamente*/

    mayorProm = (positivos / cantidad) * 100.0;
    menorProm = (negativos / cantidad) * 100.0;
    igualProm = (ceros / cantidad) * 100.0;

    /*Finalmente calculamos el promedio dividiendo los contadores de cada uno divivido para la cantidad de numeros que ingreso y lo multiplicamos por 100*/

    printf("El promedio de numeros positivos es: %.1f%% \n", mayorProm);
    printf("El promedio de numeros negativos es: %.1f%% \n", menorProm);
    printf("El promedio de numeros iguales a 0 es: %.1f%% \n", igualProm);

    /* E imprimimos el promedio de cada uno.*/
    return 0;
}