/*
 * validaciones.c
 *
 *  Created on: 16 abr. 2022
 *      Author: Usuario
 */
#include "validaciones.h"

int MyGets(char* cadena, int tam)
{
	int retorno;

	retorno = 0;

	fflush(stdin);
	fgets(cadena, tam, stdin);
	cadena[strlen(cadena) - 1] = '\0';

	return retorno;
}

int EsEntero(char* cadena)
{
	int retorno;
	int i = 0;

	retorno = 1;

	if(cadena[0] == '-')
	{
		i = 1;
	}

	for(;cadena[i] != '\0'; i++)
	{
		if(cadena[i] < '0' || cadena[i] > '9')
		{
			retorno = 0;
			break;
		}
	}

	return retorno;
}

int GetInt(int* pResultado)
{
	int retorno = 0;
	char buffer[1000];

	if(MyGets(buffer, sizeof(buffer)) == 0 && EsEntero(buffer) == 1)
	{
		retorno = 1;

		*pResultado = atoi(buffer);
	}

	return retorno;
}

void PedirEnteroP(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo)
{
	int buffer;
	int bandera = 0;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL)
	{
		do
		{
			printf("%s", mensaje);

			if(GetInt(&buffer) == 1 && buffer >= minimo && buffer <= maximo)
			{
				*pResultado = buffer;
				bandera = 1;
			}
			else
			{
				printf("%s", mensajeError);
			}
		}while(bandera == 0);
	}
}

int EsFloat(char* cadena)
{
	int retorno;
	int i = 0;
	int contadorPuntos = 0;

	retorno = 1;

	if(cadena[0] == '-')
	{
		i = 1;
	}

	for(;cadena[i] != '\0'; i++)
	{
		if(cadena[i] == '.')
		{
			contadorPuntos++;
		}
		if(cadena[i] < '.' || cadena[i] > '9' || contadorPuntos > 1 || cadena[0] == '.' || cadena[i] == '/')
		{
			retorno = 0;
			break;
		}
	}

	return retorno;
}

int GetFloat(float* pResultado)
{
	int retorno = 0;
	char buffer[100000];

	if(MyGets(buffer, sizeof(buffer)) == 0 && EsFloat(buffer) == 1)
	{
		retorno = 1;

		*pResultado = atof(buffer);
	}

	return retorno;
}

void PedirFlotanteP(float* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo)
{
	float buffer;
	int bandera = 0;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL)
	{
		do
		{
			printf("%s", mensaje);

			if(GetFloat(&buffer) == 1 && buffer >= minimo && buffer <= maximo)
			{
				*pResultado = buffer;
				bandera = 1;
			}
			else
			{
				printf("%s", mensajeError);
			}
		}while(bandera == 0);
	}
}


