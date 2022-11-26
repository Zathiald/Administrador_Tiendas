//Creación de la clase de Reporte Pago, usado para alterar las variables encontradas en la clase de Pago, se usa agregación de la clase Pago y herencia de la clase Reporte
//Creación: 17/11/22
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

//Funcion:Regresar el valor de la variable de reporte de pago por dias
//Parametros: Al ser un getter no se obtienen parametros, solo se regresa un valor
//Retorno: Se regresa el valor de la variable de reporte de pago por dias
float Reporte_Pago::getReportePagoDias()
{
	return reportePagoDias;
};

//Funcion:Darle nuevo valor a la variable de reporte de pago por dias
//Parametros: Se toma un parametro de float para darle ese valor a la variable de reporte de pago por dias
//Retorno: Al ser una función void no se tiene un retorno en sí,solo se actualiza el valor de la variable
void Reporte_Pago::setReportePagoDias(float pago)
{
	reportePagoDias = pago;
};

//Funcion:Regresar el valor de la variable de reporte de pago por mes
//Parametros: Al ser un getter no se obtienen parametros, solo se regresa un valor
//Retorno: Se regresa el valor de la variable de reporte de pago por mes
float Reporte_Pago::getReportePagoMes()
{
	return reportePagoMes;
};

//Funcion:Darle nuevo valor a la variable de reporte de pago por mes
//Parametros: Se toma un parametro de float para darle ese valor a la variable de reporte de pago por mes
//Retorno: Al ser una función void no se tiene un retorno en sí,solo se actualiza el valor de la variable
void Reporte_Pago::setReportePagoMes(float pago)
{
	reportePagoMes = pago;
};

//Funcion:Regresar el valor de la variable de reporte de pago por año
//Parametros: Al ser un getter no se obtienen parametros, solo se regresa un valor
//Retorno: Se regresa el valor de la variable de reporte de pago por año
float Reporte_Pago::getReportePagoAnual()
{
	return reportePagoAnual;
};

//Funcion:Darle nuevo valor a la variable de reporte de pago por año
//Parametros: Se toma un parametro de float para darle ese valor a la variable de reporte de pago por año
//Retorno: Al ser una función void no se tiene un retorno en sí,solo se actualiza el valor de la variable
void Reporte_Pago::setReportePagoAnual(float pago)
{
	reportePagoAnual = pago;
};

//Funcion: Se utiliza la función de prediccion de la clase de reporte, para darle valor a la variable de reporte de pago de dias
//Parametros: Se tiene el parametro de la clase de Reporte, un float que representa la suma de los tipos de pagos y un integer que se usara en la función de predicción
//Retorno: Al ser una función void, no se tiene un retorno explicito, solo se la da el valor al reporte de pago de dias
void Reporte_Pago::reportarDias(Reporte reporte,float pago,int dia)
{
	float pagoDia = reporte.prediccion(pago, dia);
	setReportePagoDias(pagoDia);
};

//Funcion: Se utiliza la función de prediccion de la clase de reporte, para darle valor a la variable de reporte de pago de mes
//Parametros: Se tiene el parametro de la clase de Reporte, un float que representa la suma de los tipos de pagos y un integer que se usara en la función de predicción
//Retorno: Al ser una función void, no se tiene un retorno explicito, solo se la da el valor al reporte de pago de mes
void Reporte_Pago::reportarMes(Reporte reporte,float pago,int mes)
{
	float pagoMes = reporte.prediccion(pago, mes);
	setReportePagoMes(pagoMes);
};

//Funcion: Se utiliza la función de prediccion de la clase de reporte, para darle valor a la variable de reporte de pago de años
//Parametros: Se tiene el parametro de la clase de Reporte, un float que representa la suma de los tipos de pagos y un integer que se usara en la función de predicción
//Retorno: Al ser una función void, no se tiene un retorno explicito, solo se la da el valor al reporte de pago de años
void Reporte_Pago::reportarAnual(Reporte reporte,float pago,int anual)
{
	float pagoAnual = reporte.prediccion(pago,anual);
	setReportePagoAnual(pagoAnual);
};

//Funcion: Se actualiza la agregación de la clase de Pago
//Parametros: Se tiene el parametro de la clase de Pago
//Retorno: Al ser una función void, no se tiene un retorno explicito, se actualiza y se agrega la clase de Pago a la clase de Reporte de Pago
void Reporte_Pago::agregarPago(Pago pag)
{
	pago = pag;
};
