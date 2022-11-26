//Creación de la clase de Reporte Venta, usado para alterar las variables encontradas en la clase de Venta, se usa agregación de la clase Venta y herencia de la clase Reporte
//Creación: 17/11/22
#include <iostream>
#include "Reporte.h"
using namespace std;

class Reporte_Venta : public Reporte
{
public:
    float getReporteVentaDias();
    void setReporteVentaDias(float);
    float getReporteVentaMes();
    void setReporteVentaMes(float);
    float getReporteVentaAnual();
    void setReporteVentaAnual(float);
    void reportarDias(Reporte,int);
    void reportarMes(Reporte,int);
    void reportarAnual(Reporte,int);
    void agregarVenta(Venta);

private:
    float reporteVentaDias;
    float reporteVentaMes;
    float reporteVentaAnual;
    Venta venta;
};

//Funcion:Regresar el valor de la variable de reporte de venta por dias
//Parametros: Al ser un getter no se obtienen parametros, solo se regresa un valor
//Retorno: Se regresa el valor de la variable de reporte de venta por dias
float Reporte_Venta::getReporteVentaDias()
{
    return reporteVentaDias;
};

//Funcion:Darle nuevo valor a la variable de reporte de venta por dias
//Parametros: Se toma un parametro de float para darle ese valor a la variable de reporte de venta por dias
//Retorno: Al ser una función void no se tiene un retorno en sí,solo se actualiza el valor de la variable
void Reporte_Venta::setReporteVentaDias(float ventas)
{
    reporteVentaDias = ventas;
};

//Funcion:Regresar el valor de la variable de reporte de venta por mes
//Parametros: Al ser un getter no se obtienen parametros, solo se regresa un valor
//Retorno: Se regresa el valor de la variable de reporte de venta por mes
float Reporte_Venta::getReporteVentaMes()
{
    return reporteVentaMes;
};

//Funcion:Darle nuevo valor a la variable de reporte de venta por mes
//Parametros: Se toma un parametro de float para darle ese valor a la variable de reporte de venta por mes
//Retorno: Al ser una función void no se tiene un retorno en sí,solo se actualiza el valor de la variable
void Reporte_Venta::setReporteVentaMes(float ventas)
{
    reporteVentaMes = ventas;
};

//Funcion:Regresar el valor de la variable de reporte de venta por año
//Parametros: Al ser un getter no se obtienen parametros, solo se regresa un valor
//Retorno: Se regresa el valor de la variable de reporte de venta por año
float Reporte_Venta::getReporteVentaAnual()
{
    return reporteVentaAnual;
};

//Funcion:Darle nuevo valor a la variable de reporte de venta por año
//Parametros: Se toma un parametro de float para darle ese valor a la variable de reporte de venta por año
//Retorno: Al ser una función void no se tiene un retorno en sí,solo se actualiza el valor de la variable
void Reporte_Venta::setReporteVentaAnual(float ventas)
{
    reporteVentaAnual = ventas;
};

//Funcion: Se utiliza la función de prediccion de la clase de reporte, para darle valor a la variable de reporte de venta de dias
//Parametros: Se tiene el parametro de la clase de Reporte y un integer que se usara en la función de predicción
//Retorno: Al ser una función void, no se tiene un retorno explicito, solo se la da el valor al reporte de venta de dias
void Reporte_Venta::reportarDias(Reporte reporte,int dia)
{
    float v_d = reporte.prediccion(venta.getVentasDia(), dia);
    setReporteVentaDias(v_d);
};

//Funcion: Se utiliza la función de prediccion de la clase de reporte, para darle valor a la variable de reporte de venta de mes
//Parametros: Se tiene el parametro de la clase de Reporte y un integer que se usara en la función de predicción
//Retorno: Al ser una función void, no se tiene un retorno explicito, solo se la da el valor al reporte de venta de mes
void Reporte_Venta::reportarMes(Reporte reporte,int mes)
{
    float v_m = reporte.prediccion(venta.getVentasMes(), mes);
    setReporteVentaMes(v_m);
};

//Funcion: Se utiliza la función de prediccion de la clase de reporte, para darle valor a la variable de reporte de venta de años
//Parametros: Se tiene el parametro de la clase de Reporte y un integer que se usara en la función de predicción
//Retorno: Al ser una función void, no se tiene un retorno explicito, solo se la da el valor al reporte de venta de años
void Reporte_Venta::reportarAnual(Reporte reporte,int anio)
{
    float v_a = reporte.prediccion(venta.getVentasAnual(), anio);
    setReporteVentaAnual(v_a);
};

//Funcion: Se actualiza la agregación de la clase de Venta
//Parametros: Se tiene el parametro de la clase de Venta
//Retorno: Al ser una función void, no se tiene un retorno explicito, se actualiza y se agrega la clase de Venta a la clase de Reporte de Venta
void Reporte_Venta::agregarVenta(Venta vent)
{
    venta = vent;
};

