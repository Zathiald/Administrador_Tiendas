#include <iostream>
#include "Reporte.h"
using namespace std;

class Reporte_Gasto : public Reporte
{
public:
	float getreporteGasto_dias();
	void setreporteGasto_dias(float);
	float getreporteGasto_mes();
	void setreporteGasto_mes(float);
	float getreporteGasto_anual();
	void setreporteGasto_anual(float);
	void reportar_dias(Reporte,int);
	void reportar_mes(Reporte,int);
	void reportar_anual(Reporte,int);
	void agregar_gasto(Gasto);

private:
	float reporteGasto_dias;
	float reporteGasto_mes;
	float reporteGasto_anual;
	Gasto gasto;
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

void Reporte_Gasto::reportar_dias(Reporte reporte,int d)
{
	float g_d = reporte.prediccion(gasto.getGastos_dia(), d);
	setreporteGasto_dias(g_d);
};

void Reporte_Gasto::reportar_mes(Reporte reporte,int m)
{
	float g_m = reporte.prediccion(gasto.getGastos_mes(), m);
	setreporteGasto_mes(g_m);
};

void Reporte_Gasto::reportar_anual(Reporte reporte,int a)
{
	float g_a = reporte.prediccion(gasto.getGastos_anual(), a);
	setreporteGasto_anual(g_a);
};

void Reporte_Gasto::agregar_gasto(Gasto gast)
{
	gasto = gast;
};