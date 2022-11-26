//Creación de la clase de Reporte, se crea una función que se va a heredear en todas las clases de Reportes
#pragma once
#include <iostream>

using namespace std;

class Reporte
{
public:
	float prediccion(float, int);
};

//Funcion:Se toman los parametros definidos y se multiplican entre ellos
//Parametros: Un float que representa la cantidad de dinero y un integer que representa a cuanto tiempo a futuro se quiere predecir
//Retorno: Se regresa el valor de ambos parametros multiplicados
float Reporte::prediccion(float dinero, int tiempo)
{
	return dinero * tiempo;
};