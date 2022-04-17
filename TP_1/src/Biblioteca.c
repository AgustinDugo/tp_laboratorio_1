/*
 * Biblioteca.c
 *
 *  Created on: 11 abr 2022
 *      Author: Usuario
 */
#include "Biblioteca.h"

int descuento (float precio, float porcentaje, float* resultado){

	int retorno;
	float calculo;

	retorno=1;

	if(resultado!=NULL){
	retorno=0;
	porcentaje = precio * (porcentaje /100);
	calculo = precio- porcentaje;
	*resultado = calculo;
	}


	return retorno;

}

int aumento (float precio, float porcentaje, float* resultado){

	int retorno;
	float calculo;

	retorno=1;

	if(resultado!=NULL){
	retorno=0;
	porcentaje = precio * (porcentaje /100);
	calculo = precio + porcentaje;
	*resultado = calculo;
	}


	return retorno;

}


float CalcularPrecioUnitario(float precio, int kilometros){
	float resultado;
	resultado = precio/kilometros;


	return resultado;
}



int ConversorBitcoin(float precio, float precioBitcoin, float* resultado){

	int retorno;
	float calculo;

	retorno=1;

	if(resultado !=NULL){
		retorno=0;
		calculo = precio/precioBitcoin;

		*resultado = calculo;
	}


	return retorno;


}
