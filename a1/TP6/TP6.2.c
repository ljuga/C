#include <stdio.h>



// Función para seleccionar un mes
int seleccionarMes() {
    int mes;
    printf("Seleccione un mes:\n");
    printf("1. Enero\n2. Febrero\n3. Marzo\n4. Abril\n5. Mayo\n6. Junio\n7. Julio\n8. Agosto\n9. Septiembre\n10. Octubre\n11. Noviembre\n12. Diciembre\n");
    printf("Ingrese el numero del mes (1-12): ");
    scanf("%d", &mes);

    // Validación del mes
    while (mes < 1 || mes > 12) {
        printf("numero de mes invalido. Ingrese un numero entre 1 y 12: ");
        scanf("%d", &mes);
    }
    return mes;
}

// Función para obtener los días del mes
int obtenerDiasDelMes(int mes) {
    switch (mes) {
        case 1: // enero
        case 3: // marzo
        case 5: // mayo
        case 7: // julio
        case 8: // agosto
        case 10: // octubre
        case 12: // diciembre
            return 31;
        case 4: // abril
        case 6: // junio
        case 9: // septiembre
        case 11: // noviembre
            return 30;
        default:
            return 0; 
    }
}

int main() {
    int mes = seleccionarMes();
    if (mes == 2) {
        printf("El mes seleccionado tiene 28/29 dias.\n");
    } else {
        int dias = obtenerDiasDelMes(mes);
        printf("El mes seleccionado tiene %d dias.\n", dias);
    }
    return 0;
}