#include <iostream>

using namespace std;

class Reporte_Gasto : private Gasto
{
public:
	float getreporteGasto_dias();
	void setreporteGasto_dias(float);
	float getreporteGasto_mes();
	void setreporteGasto_mes(float);
	float getreporteGasto_anual();
	void setreporteGasto_anual(float);
	float prediccion(float, float);

private:
	float reporteGasto_dias;
	float reporteGasto_mes;
	float reporteGasto_anual;
};


float Reporte_Gasto::getreporteGasto_dias()
{
	return reporteGasto_dias;
};

void Reporte_Gasto::setreporteGasto_dias(float g)
{
	reporteGasto_dias = g;
};

float Reporte_Gasto::getreporteGasto_mes()
{
	return reporteGasto_mes;
};

void Reporte_Gasto::setreporteGasto_mes(float g)
{
	reporteGasto_mes = g;
};

float Reporte_Gasto::getreporteGasto_anual()
{
	return reporteGasto_anual;
};

void Reporte_Gasto::setreporteGasto_anual(float g)
{
	reporteGasto_anual = g;
};

float Reporte_Gasto::prediccion(float g, float t)
{
	return g * t;
}
