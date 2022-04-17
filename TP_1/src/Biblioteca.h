/*
 * Biblioteca.h
 *
 *  Created on: 11 abr 2022
 *      Author: Usuario
 */

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/// @fn int descuento(float, float, float*)
/// @brief recibe 2 numeros flotantes y un precio y un porcentaje de descuento. devuelve el descuento del precio por puntero
///

/// @param precio precio sin descuento
/// @param porcentaje porcentaje de descuento
/// @param resultado precio con descuento
/// @return -1 si no pudo hacerlo, 0 si pudo
int descuento (float precio, float porcentaje, float* resultado);

/// @fn int aumento(float, float, float*)
/// @brief recibe 2 numeros flotantes y un precio y un porcentaje de aumento. devuelve el aumento del precio por puntero
///
/// @param precio sin aumento
/// @param porcentaje procentaje de aumento
/// @param resultado precio con aumento
/// @return -1 si no pudo hacerlo, 0 si pudo
int aumento (float precio, float porcentaje, float* resultado);

/// @fn float CalcularPrecioUnitario(float, int)
/// @brief Recibe un int precio total y un float cantidad de kilometros y retorna el precio unitario.
///
/// @param precio precio total
/// @param kilometros kilometros total
/// @return Retorna el precio unitario
float CalcularPrecioUnitario(float precio, int kilometros);


/// @fn int ConversorBitcoin(float, float, float*)
/// @brief Recibe dos float, el precio total y el precio de bitcoin. Devuelve la conversion a bitcon por puntero.
///
/// @param precio precio total
/// @param precioBitcoin precio de un bitcoin
/// @param resultado resultado de la conversion del precio total a bitcoin
/// @return -1 si no pudo hacerlo, 0 si pudo

int ConversorBitcoin(float precio, float precioBitcoin, float* resultado);

#endif /* BIBLIOTECA_H_ */






