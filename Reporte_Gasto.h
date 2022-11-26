#include <iostream>
#include "Reporte.h"
using namespace std;

class Reporte_Gasto : public Reporte
{
public:
	float getReporteGastoDias();
	void setReporteGastoDias(float);
	float getReporteGastoMes();
	void setReporteGastoMes(float);
	float getReporteGastoAnual();
	void setReporteGastoAnual(float);
	void reportarDias(Reporte,int);
	void reportarMes(Reporte,int);
	void reportarAnual(Reporte,int);
	void agregarGasto(Gasto);

private:
	float reporteGastoDias;
	float reporteGastoMes;
	float reporteGastoAnual;
	Gasto gasto;
};


float Reporte_Gasto::getReporteGastoDias()
{
	return reporteGastoDias;
};

void Reporte_Gasto::setReporteGastoDias(float gasto)
{
	reporteGastoDias = gasto;
};

float Reporte_Gasto::getReporteGastoMes()
{
	return reporteGastoMes;
};

void Reporte_Gasto::setReporteGastoMes(float gasto)
{
	reporteGastoMes = gasto;
};

float Reporte_Gasto::getReporteGastoAnual()
{
	return reporteGastoAnual;
};

void Reporte_Gasto::setReporteGastoAnual(float gasto)
{
	reporteGastoAnual = gasto;
};

void Reporte_Gasto::reportarDias(Reporte reporte,int dia)
{
	float g_d = reporte.prediccion(gasto.getGastosDia(), dia);
	setReporteGastoDias(g_d);
};

void Reporte_Gasto::reportarMes(Reporte reporte,int mes)
{
	float g_m = reporte.prediccion(gasto.getGastosMes(), mes);
	setReporteGastoMes(g_m);
};

void Reporte_Gasto::reportarAnual(Reporte reporte,int anio)
{
	float g_a = reporte.prediccion(gasto.getGastosAnual(), anio);
	setReporteGastoAnual(g_a);
};

void Reporte_Gasto::agregarGasto(Gasto gast)
{
	gasto = gast;
};