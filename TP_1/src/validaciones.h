/*
 * validaciones.h
 *
 *  Created on: 16 abr. 2022
 *      Author: Usuario
 */

#ifndef VALIDACIONES_H_
#define VALIDACIONES_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/// @fn int MyGets(char*, int)
/// @brief guarda el ingreso de un numero entero en formato string
///
/// @param cadena
/// @param tam
/// @return por ahora no retorna nada
int MyGets(char* cadena, int tam);

/// @fn int EsEntero(char*)
/// @brief Verifica que el ingreso tenga solo numeros
///
/// @param cadena
/// @return 1 si es un entero, 0 si no lo pudo validar

int EsEntero(char* cadena);

/// @fn int GetInt(int*)
/// @brief convierte el string validado en un numero entero
///
/// @param pResultado
/// @return retorna 1 si pudo hacerlo correctamente, 0 si no pudo
int GetInt(int* pResultado);

/// @fn void PedirEnteroP(int*, char*, char*, int, int)
/// @brief funcion que pide el ingreso del numero entero
///
/// @param pResultado variable donde se guarda el entero recibido
/// @param mensaje mensaje para el usuario
/// @param mensajeError mensaje de error para el usuario
/// @param minimo numero maximo posible
/// @param maximo numero minimo posible
void PedirEnteroP(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo);


/// @fn int EsFloat(char*)
/// @brief
///
/// @param cadena
/// @return
int EsFloat(char* cadena);

/// @fn int GetFloat(float*)
/// @brief convierte el string validado en un numero flotante
///
/// @param pResultado
/// @return retorna 1 si pudo hacerlo correctamente, 0 si no pudo
int GetFloat(float* pResultado);

/// @fn void PedirFlotanteP(float*, char*, char*, int, int)
/// @brief pide el ingreso de un numero flotante
///
/// @param pResultado variable donde se guarda el entero recibido
/// @param mensaje mensaje para el usuario
/// @param mensajeError mensaje de error para el usuario
/// @param minimo numero maximo posible
/// @param maximo numero minimo posible

void PedirFlotanteP(float* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo);

#endif /* VALIDACIONES_H_ */
