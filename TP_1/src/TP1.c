#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"
#include "validaciones.h"

#define DESCUENTO 10
#define AUMENTO 25
#define BITCOIN 4606954.55

int main(void) {

	setbuf(stdout, NULL);

	int opcion;
	int banderaKilometros;
	int banderaPrecio;
	int banderaCostos;
	int banderaResultados;
	int banderaCaseCuatro;
	float diferenciaPrecio;
	float precioDebitoAerolineas;
	float precioDebitoLatam;
	float precioCreditoAerolineas;
	float precioCreditoLatam;
	float precioBitcoinAerolineas;
	float precioBitcoinLatam;
	float precioUnitarioAerolineas;
	float precioUnitarioLatam;
	int kilometros;
	int salida;
	float precioAerolineas;
	float precioLatam;

	banderaKilometros = 0;
	banderaPrecio = 0;
	banderaCostos = 0;
	banderaResultados = 0;
	banderaCaseCuatro = 0;

	do {

		system("cls");
		printf("\t***********Menu de opciones***********\n");

		if (banderaKilometros == 0) {
			printf("1) Ingresar kilometros: (km=k)\n");
		} else {
			printf("1) Ingresar kilometros: (km=%d)\n", kilometros);
		}

		if (banderaPrecio == 0) {
			printf(
					"2) Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)\n -Precio Vuelo Aerolíneas:\n -Precio Vuelo Latam:\n");
		} else {
			printf(
					"2) Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)\n -Precio Vuelo Aerolíneas:%f\n -Precio Vuelo Latam:%f\n",
					precioAerolineas, precioLatam);
		}

		if (banderaCostos == 0) {
			puts(
					"3) Calcular todos los costos:\n"
							"a) Tarjeta de débito (descuento 10%)\n"
							"b) Tarjeta de crédito (interés 25%)\n"
							"c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)\n"
							"d) Mostrar precio por km (precio unitario)\n"
							"e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)\n");
		} else {
			puts(
					"3) Calcular todos los costos:\n"
							"a) Tarjeta de débito (descuento Calculado con exito)\n"
							"b) Tarjeta de crédito (interés 25% Calculado con exito)\n"
							"c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos Conversion realizada con exito)\n"
							"d) Mostrar precio por km (precio unitario calculado con exito)\n"
							"e) Mostrar diferencia de precio ingresada (Diferencia calculada con exito)\n");

		}

		if (banderaCaseCuatro == 0) {
			puts("4) Informar Resultados\n"
					"Latam:\n"

					"a) Precio con tarjeta de débito: r\n"
					"b) Precio con tarjeta de crédito: r\n"
					"c) Precio pagando con bitcoin : r\n"
					"d) Precio unitario: r\n"
					"Aerolíneas:\n"
					"a) Precio con tarjeta de débito: r\n"
					"b) Precio con tarjeta de crédito: r\n"
					"c) Precio pagando con bitcoin : r \n"
					"d) Precio unitario: r \n"
					"La diferencia de precio es :r\n");
		} else {
			printf("4) Informar Resultados\n"
					"Precio Aerolineas:%f\n"
					"a) Precio con tarjeta de débito:%f\n"
					"b) Precio con tarjeta de crédito:%f\n"
					"c) Precio pagando con bitcoin :%f\n"
					"d) Precio unitario:%f\n"
					"Precio Latam:%f\n"
					"a) Precio con tarjeta de débito:%f\n"
					"b) Precio con tarjeta de crédito:%f\n"
					"c) Precio pagando con bitcoin :%f\n"
					"d) Precio unitario:%f\n"
					"La diferencia de precio es :%f\n", precioAerolineas,
					precioDebitoAerolineas, precioCreditoAerolineas,
					precioBitcoinAerolineas, precioUnitarioAerolineas,
					precioLatam, precioDebitoLatam, precioCreditoLatam,
					precioBitcoinLatam, precioUnitarioLatam, diferenciaPrecio);
		}

		puts("5) Carga forzada de datos\n");
		puts("6) Salir\n");

		PedirEnteroP(&opcion, "Ingrese una opcion\n",
				"La opcion ingresada no es correcta\n", 1, 6);

		switch (opcion) {
		case 1:
			PedirEnteroP(&kilometros, "Ingrese la cantidad de kilometros\n",
					"El dato ingresado no es valido\n", 1, 9999999);
			banderaKilometros = 1;
			break;

		case 2:

			PedirFlotanteP(&precioAerolineas,
					"Ingrese el precio de Aerolineas\n",
					"El precio ingresado no es valido\n", 1, 99999999);
			PedirFlotanteP(&precioLatam, "Ingrese el precio de Latam\n",
					"El precio ingresado no es valido\n", 1, 99999999);

			banderaPrecio = 1;
			break;

		case 3:
			descuento(precioAerolineas, DESCUENTO, &precioDebitoAerolineas);
			descuento(precioLatam, DESCUENTO, &precioDebitoLatam);
			aumento(precioAerolineas, AUMENTO, &precioCreditoAerolineas);
			aumento(precioLatam, AUMENTO, &precioCreditoLatam);
			ConversorBitcoin(precioAerolineas, BITCOIN,
					&precioBitcoinAerolineas);
			ConversorBitcoin(precioLatam, BITCOIN, &precioBitcoinLatam);
			precioUnitarioAerolineas = CalcularPrecioUnitario(precioAerolineas,
					kilometros);
			precioUnitarioLatam = CalcularPrecioUnitario(precioLatam,
					kilometros);
			diferenciaPrecio = precioAerolineas - precioLatam;
			banderaCostos = 1;
			banderaResultados = 1;
			break;

		case 4:
			if (banderaResultados == 0) {
				printf("Error, debe calcular\n");
			} else {
				banderaCaseCuatro = 1;
			}

			break;

		case 5:

			kilometros = 7090;
			precioAerolineas = 1335000.66;
			precioLatam = 1350000.76;

			descuento(precioAerolineas, DESCUENTO, &precioDebitoAerolineas);
			descuento(precioLatam, DESCUENTO, &precioDebitoLatam);
			aumento(precioAerolineas, AUMENTO, &precioCreditoAerolineas);
			aumento(precioLatam, AUMENTO, &precioCreditoLatam);
			ConversorBitcoin(precioAerolineas, BITCOIN,
					&precioBitcoinAerolineas);
			ConversorBitcoin(precioLatam, BITCOIN, &precioBitcoinLatam);
			precioUnitarioAerolineas = CalcularPrecioUnitario(precioAerolineas,
					kilometros);
			precioUnitarioLatam = CalcularPrecioUnitario(precioLatam,
					kilometros);
			diferenciaPrecio = precioAerolineas - precioLatam;

			if (diferenciaPrecio < 0) {
				diferenciaPrecio = diferenciaPrecio * -1;
			}

			printf("5. Carga forzada\n"
					"Precio Aerolineas:%f\n"
					"a) Precio con tarjeta de débito:%f\n"
					"b) Precio con tarjeta de crédito:%f\n"
					"c) Precio pagando con bitcoin :%f\n"
					"d) Precio unitario:%f\n"
					"Precio Latam:%f\n"
					"a) Precio con tarjeta de débito:%f\n"
					"b) Precio con tarjeta de crédito:%f\n"
					"c) Precio pagando con bitcoin :%f\n"
					"d) Precio unitario:%f\n"
					"La diferencia de precio es :%f\n", precioAerolineas,
					precioDebitoAerolineas, precioCreditoAerolineas,
					precioBitcoinAerolineas, precioUnitarioAerolineas,
					precioLatam, precioDebitoLatam, precioCreditoLatam,
					precioBitcoinLatam, precioUnitarioLatam, diferenciaPrecio);

			break;

		case 6:
			PedirEnteroP(&salida,
					"Si desea salir presione 1, si desea cancelar presione 2\n",
					"La opcion ingresada no es correcta\n", 1, 2);
			break;

		}

	} while (salida != 1);
	return EXIT_SUCCESS;
}
