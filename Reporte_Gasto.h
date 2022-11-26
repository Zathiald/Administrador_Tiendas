//Creación de la clase de Reporte Gasto, usado para alterar las variables encontradas en la clase de Gasto, se usa agregación de la clase Gasto y herencia de la clase Reporte
//Creación: 17/11/22
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

//Funcion:Regresar el valor de la variable de reporte de gasto por dias
//Parametros: Al ser un getter no se obtienen parametros, solo se regresa un valor
//Retorno: Se regresa el valor de la variable de reporte de gasto por dias
float Reporte_Gasto::getReporteGastoDias()
{
	return reporteGastoDias;
};

//Funcion:Darle nuevo valor a la variable de reporte de gasto por dias
//Parametros: Se toma un parametro de float para darle ese valor a la variable de reporte de gasto por dias
//Retorno: Al ser una función void no se tiene un retorno en sí,solo se actualiza el valor de la variable
void Reporte_Gasto::setReporteGastoDias(float gasto)
{
	reporteGastoDias = gasto;
};

//Funcion:Regresar el valor de la variable de reporte de gasto por mes
//Parametros: Al ser un getter no se obtienen parametros, solo se regresa un valor
//Retorno: Se regresa el valor de la variable de reporte de gasto por mes
float Reporte_Gasto::getReporteGastoMes()
{
	return reporteGastoMes;
};

//Funcion:Darle nuevo valor a la variable de reporte de gasto por mes
//Parametros: Se toma un parametro de float para darle ese valor a la variable de reporte de gasto por mes
//Retorno: Al ser una función void no se tiene un retorno en sí,solo se actualiza el valor de la variable
void Reporte_Gasto::setReporteGastoMes(float gasto)
{
	reporteGastoMes = gasto;
};

//Funcion:Regresar el valor de la variable de reporte de gasto por año
//Parametros: Al ser un getter no se obtienen parametros, solo se regresa un valor
//Retorno: Se regresa el valor de la variable de reporte de gasto por año
float Reporte_Gasto::getReporteGastoAnual()
{
	return reporteGastoAnual;
};

//Funcion:Darle nuevo valor a la variable de reporte de gasto por año
//Parametros: Se toma un parametro de float para darle ese valor a la variable de reporte de gasto por año
//Retorno: Al ser una función void no se tiene un retorno en sí,solo se actualiza el valor de la variable
void Reporte_Gasto::setReporteGastoAnual(float gasto)
{
	reporteGastoAnual = gasto;
};

//Funcion: Se utiliza la función de prediccion de la clase de reporte, para darle valor a la variable de reporte de gasto de dias
//Parametros: Se tiene el parametro de la clase de Reporte y un integer que se usara en la función de predicción
//Retorno: Al ser una función void, no se tiene un retorno explicito, solo se la da el valor al reporte de gasto de dias
void Reporte_Gasto::reportarDias(Reporte reporte,int dia)
{
	float g_d = reporte.prediccion(gasto.getGastosDia(), dia);
	setReporteGastoDias(g_d);
};

//Funcion: Se utiliza la función de prediccion de la clase de reporte, para darle valor a la variable de reporte de gasto de mes
//Parametros: Se tiene el parametro de la clase de Reporte y un integer que se usara en la función de predicción
//Retorno: Al ser una función void, no se tiene un retorno explicito, solo se la da el valor al reporte de gasto de mes
void Reporte_Gasto::reportarMes(Reporte reporte,int mes)
{
	float g_m = reporte.prediccion(gasto.getGastosMes(), mes);
	setReporteGastoMes(g_m);
};

//Funcion: Se utiliza la función de prediccion de la clase de reporte, para darle valor a la variable de reporte de gasto de años
//Parametros: Se tiene el parametro de la clase de Reporte y un integer que se usara en la función de predicción
//Retorno: Al ser una función void, no se tiene un retorno explicito, solo se la da el valor al reporte de gasto de años
void Reporte_Gasto::reportarAnual(Reporte reporte,int anio)
{
	float g_a = reporte.prediccion(gasto.getGastosAnual(), anio);
	setReporteGastoAnual(g_a);
};

//Funcion: Se actualiza la agregación de la clase de Gasto
//Parametros: Se tiene el parametro de la clase de Gasto
//Retorno: Al ser una función void, no se tiene un retorno explicito, se actualiza y se agrega la clase de Gasto a la clase de Reporte de Gasto
void Reporte_Gasto::agregarGasto(Gasto gast)
{
	gasto = gast;
};