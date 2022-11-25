#pragma once
#include <iostream>

using namespace std;

class Reporte
{
public:
	float prediccion(float, int);
};

float Reporte::prediccion(float v, int t)
{
	return v * t;
}