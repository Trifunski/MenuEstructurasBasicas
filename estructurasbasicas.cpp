#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include "misfunciones.h"

int edad50(int anoNac); // Función para calcular la edad dentro de 50 años

int main() {

    /* Variables */

    int opcion;
    int anoNac;
    int num;
    int num1;
    int num2;
    char salir[1];
    bool repetir = true;

    do {

        SetConsoleOutputCP(65001); /* Establecer las tildes */
        system("cls"); /* Limpiar la consola */
        system("color a"); /* Establecer el color verde a la consola */

        /* Menú */
        printf("------ Menú de Opciones ------\n");
        printf("\n");
        printf(" 1.- Calcular edad en 2050 \n");
        printf(" 2.- Contar números impares \n");
        printf(" 3.- Sumar y restar dos números \n");
        printf(" 4.- factorial.exe \n");
        printf(" 5.- Salir \n");
        printf("\n");
        printf("-------------------------------\n");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                system("cls");
                printf("Introduzca a\244o de Nacimiento: ");
                scanf("%d", &anoNac);
                printf("Su edad en 2050 es de: %d \n", edad50(anoNac));
                system("pause");
                break;

            case 2:
                system("cls");
                printf("Introduzca un numero mayor de 10: \n");
                scanf("%d", &num);

                if (num < 10) {
                    printf("Introduce un valor por encima de 10.");
                } else {
                    for (int i = 1; i <= num; i++) {
                        if (i % 2 != 0) {
                            printf("%d|", i);
                        }
                    }
                }
                
                printf("\n");
                system("pause");
                break;

            case 3: 
                system("cls");
                printf("Introduce un valor: \n");
                scanf("%d", &num1);
                printf("Introduce un segundo valor: \n");
                scanf("%d", &num2);
                printf("----------------------------------\n");
                printf("La suma de los dos valores es: %d \n", suma(num1, num2));
                printf("----------------------------------\n");
                printf("La resta de los dos valores es: %d \n", resta(num1, num2));
                printf("----------------------------------\n\n");
                system("pause");
                break;
            
            case 4:
                system("cls");
                system("factorial.exe");
                break;

            case 5:
                system("cls");
                printf("¿Desea salir del programa? (s/n)\n");
                scanf("%s", &salir[0]);

                if (salir[0] == 'n') {
                    repetir = true;
                } else if (salir[0] == 's') {
                    exit(0);
                }

                break;
        }

    } while(repetir = true);

}

int edad50(int anoNac) {
    anoNac = 2050 - anoNac;
    return anoNac;
} 