#include <iostream>
#include "Reporte.h"
using namespace std;

class Reporte_Pago : public Reporte
{
public:
	float getreportePago_dias();
	void setreportePago_dias(float);
	float getreportePago_mes();
	void setreportePago_mes(float);
	float getreportePago_anual();
	void setreportePago_anual(float);
	void reportar_dias(Reporte,float,int);
	void reportar_mes(Reporte,float,int);
	void reportar_anual(Reporte,float,int);
	void agregar_pago(Pago);

private:
	float reportePago_dias;
	float reportePago_mes;
	float reportePago_anual;
	Pago pago;
};

float Reporte_Pago::getreportePago_dias()
{
	return reportePago_dias;
};

void Reporte_Pago::setreportePago_dias(float p)
{
	reportePago_dias = p;
};

float Reporte_Pago::getreportePago_mes()
{
	return reportePago_mes;
};

void Reporte_Pago::setreportePago_mes(float p)
{
	reportePago_mes = p;
};

float Reporte_Pago::getreportePago_anual()
{
	return reportePago_anual;
};

void Reporte_Pago::setreportePago_anual(float v)
{
	reportePago_anual = v;
};

void Reporte_Pago::reportar_dias(Reporte reporte,float p,int d)
{
	float p_d = reporte.prediccion(p, d);
	setreportePago_dias(p_d);
};

void Reporte_Pago::reportar_mes(Reporte reporte,float p,int m)
{
	float p_m = reporte.prediccion(p, m);
	setreportePago_mes(p_m);
};

void Reporte_Pago::reportar_anual(Reporte reporte,float p,int a)
{
	float p_a = reporte.prediccion(p, a);
	setreportePago_anual(p_a);
};

void Reporte_Pago::agregar_pago(Pago pag)
{
	pago = pag;
};
