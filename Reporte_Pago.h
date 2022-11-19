#include <iostream>

using namespace std;

class Reporte_Pago : private Pago
{
public:
	float getreportePago_dias();
	void setreportePago_dias(float);
	float getreportePago_mes();
	void setreportePago_mes(float);
	float getreportePago_anual();
	void setreportePago_anual(float);
	float prediccion(float,float);

private:
	float reportePago_dias;
	float reportePago_mes;
	float reportePago_anual;
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

float Reporte_Pago::prediccion(float p, float t)
{
	return p * t;
}
