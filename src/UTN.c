/*
 * UTN.c
 *
 *  Created on: 25 sep. 2021
 *      Author: Hogar
 */


#include <stdio.h>
#include <stdlib.h>

/*
 * \brief Recibe dos numeros y nos dice si se puede hacer la division. En caso de poder hacerse, escribe en la variable del main el resultado
 * \param Recibe una variable tipo float con la direccion de memoria de la variable en el main, donde escribir el resultado.
 * \param Recibe un entero para hacer la cuenta.
 * \param Recibe otro entero para hacer la cuenta.
 * \return devuelve 0 si salio todo bien o - 1 en caso de error.
 */

int dividir(float* pResultado, int operador1, int operador2)
{

	float resultado;
	int retorno = -1;
	if(pResultado != NULL && operador2 != 0)
	{
		resultado = (float) operador1 / operador2;
		*pResultado = resultado;
		retorno = 0;
	}
	return retorno;

}

/*
 * \brief Recibe dos numeros y nos dice la suma
 * \param Recibe un entero para hacer la cuenta.
 * \param Recibe otro entero para hacer la cuenta.
 * \return devuelve el resultado de la suma.
 */

int sumar(int operador1, int operador2)

{
    int resultado;
    resultado = operador1 + operador2;

    return resultado;

}

/*
 * \brief Recibe dos numeros y nos dice la resta
 * \param Recibe un entero para hacer la cuenta.
 * \param Recibe otro entero para hacer la cuenta.
 * \return devuelve el resultado de la resta.
 */

int restar (int operador1, int operador2)

{

    int resultado;
    resultado = operador1 - operador2;
    return resultado;

}

/*
 * \brief Recibe dos numeros y nos dice el producto.
 * \param Recibe un entero para hacer la cuenta.
 * \param Recibe otro entero para hacer la cuenta.
 * \return devuelve el resultado de la multiplicacion.
 */

int producto (int operador1, int operador2)

{
    int resultado;
    resultado = operador1 * operador2;
    return resultado;

}

/*
 * \brief Recibe un numero y nos da el factorial.
 * \param Recibe un entero para calcular el factorial.
 * \return devuelve el factorial del numero.
 */

long int factorial (int numero)
    {

    long int resultado;

    resultado = 1;

    if (numero != 0)
    {
        resultado = numero * factorial (numero - 1);
    }
    return resultado;
    }


