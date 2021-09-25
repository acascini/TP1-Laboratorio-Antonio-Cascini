/*
 ============================================================================
 Name        : TRABAJOPRACTICO1.c
 Author      : ANTONIO CASCINI
 Version     :
 Copyright   : UTN
 Description : CALCULADORA - LENGUAJE C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "UTN.h"

int main(void) {

	setbuf(stdout, NULL);
	float resultadoDivision;
	int numero1;
	int numero2;
	int respuesta;
	int resultadoSuma;
	int resultadoResta;
	int resultadoProducto;
	long int factorialA;
	long int factorialB;
	int opcion;

	numero1 = 0;
	numero2 = 0; // la inicializo porque sino me aparece basura electronica en la primera ejecucion.

	do
        {

        printf("Trabajo practico Nro. 1 - CALCULADORA\n\n");
        printf("Menu de opciones\n\n");
        printf("1. Ingresar 1er operando (A= %d\n", numero1);
        printf("2. Ingresar 2do operando (B= %d\n", numero2);
        printf("3. Calcular todas las operaciones\n");
        printf("4. Informar los resultados\n");
        printf("5. Salir\n\n");
        printf("Ingrese su opcion:");
        scanf("%d",&opcion);


            switch(opcion)
            {
            case 1:

                printf("\nIngrese 1er operando:\n ");
                scanf("%d",&numero1);
                break;

            case 2:

                printf("Ingrese 2do operando:\n ");
                scanf("%d",&numero2);
                break;

            case 3:

                resultadoSuma = sumar(numero1, numero2);
                resultadoResta = restar(numero1, numero2);
                resultadoProducto = producto(numero1, numero2);
                factorialA = factorial(numero1);
                factorialB = factorial(numero2);
                respuesta = dividir(&resultadoDivision, numero1, numero2);
                break;

            case 4:

                printf("\n El resultado de A + B es %d\n ",resultadoSuma);
                printf("\n El resultado de A - B es %d\n ",resultadoResta);
                printf("\n El resultado de A * B es %d\n ", resultadoProducto);
                printf("\n El factorial de A es %ld \n\n y el factorial de B es %ld \n",factorialA, factorialB);
                if(respuesta == 0)
                        {

                        printf("\n El resultado de A / B es %f\n",resultadoDivision);

                        }

                    else

                        {

                        printf("\n No es posible dividir por cero\n");

                        }
                break;
                default: printf("\n\n\nOpcion no valida");
            }

        } while (opcion !=5);

	return EXIT_SUCCESS;
}

