#pragma once
#include <iostream>

using namespace std;

class Reporte
{
public:
	float prediccion(float, int);
};

float Reporte::prediccion(float dinero, int tiempo)
{
	return dinero * tiempo;
}