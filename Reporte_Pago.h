#include <iostream>
#include "Reporte.h"
using namespace std;

class Reporte_Pago : public Reporte
{
public:
	float getReportePagoDias();
	void setReportePagoDias(float);
	float getReportePagoMes();
	void setReportePagoMes(float);
	float getReportePagoAnual();
	void setReportePagoAnual(float);
	void reportarDias(Reporte,float,int);
	void reportarMes(Reporte,float,int);
	void reportarAnual(Reporte,float,int);
	void agregarPago(Pago);

private:
	float reportePagoDias;
	float reportePagoMes;
	float reportePagoAnual;
	Pago pago;
};

float Reporte_Pago::getReportePagoDias()
{
	return reportePagoDias;
};

void Reporte_Pago::setReportePagoDias(float pago)
{
	reportePagoDias = pago;
};

float Reporte_Pago::getReportePagoMes()
{
	return reportePagoMes;
};

void Reporte_Pago::setReportePagoMes(float pago)
{
	reportePagoMes = pago;
};

float Reporte_Pago::getReportePagoAnual()
{
	return reportePagoAnual;
};

void Reporte_Pago::setReportePagoAnual(float pago)
{
	reportePagoAnual = pago;
};

void Reporte_Pago::reportarDias(Reporte reporte,float pago,int dia)
{
	float pagoDia = reporte.prediccion(pago, dia);
	setReportePagoDias(pagoDia);
};

void Reporte_Pago::reportarMes(Reporte reporte,float pago,int mes)
{
	float pagoMes = reporte.prediccion(pago, mes);
	setReportePagoMes(pagoMes);
};

void Reporte_Pago::reportarAnual(Reporte reporte,float pago,int anual)
{
	float pagoAnual = reporte.prediccion(pago,anual);
	setReportePagoAnual(pagoAnual);
};

void Reporte_Pago::agregarPago(Pago pag)
{
	pago = pag;
};
