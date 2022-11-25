#include <iostream>
#include "Reporte.h"
using namespace std;

class Reporte_Venta : public Reporte
{
public:
    float getreporteVenta_dias();
    void setreporteVenta_dias(float);
    float getreporteVenta_mes();
    void setreporteVenta_mes(float);
    float getreporteVenta_anual();
    void setreporteVenta_anual(float);
    void reportar_dias(Reporte,int);
    void reportar_mes(Reporte,int);
    void reportar_anual(Reporte,int);
    void agregar_venta(Venta);

private:
    float reporteVenta_dias;
    float reporteVenta_mes;
    float reporteVenta_anual;
    Venta venta;
};

float Reporte_Venta::getreporteVenta_dias()
{
    return reporteVenta_dias;
};

void Reporte_Venta::setreporteVenta_dias(float v)
{
    reporteVenta_dias = v;
};

float Reporte_Venta::getreporteVenta_mes()
{
    return reporteVenta_mes;
};

void Reporte_Venta::setreporteVenta_mes(float v)
{
    reporteVenta_mes = v;
};

float Reporte_Venta::getreporteVenta_anual()
{
    return reporteVenta_anual;
};

void Reporte_Venta::setreporteVenta_anual(float v)
{
    reporteVenta_anual = v;
};

void Reporte_Venta::reportar_dias(Reporte reporte,int d)
{
    float v_d = reporte.prediccion(venta.getVentas_dia(), d);
    setreporteVenta_dias(v_d);
};

void Reporte_Venta::reportar_mes(Reporte reporte,int m)
{
    float v_m = reporte.prediccion(venta.getVentas_mes(), m);
    setreporteVenta_mes(v_m);
};

void Reporte_Venta::reportar_anual(Reporte reporte,int a)
{
    float v_a = reporte.prediccion(venta.getVentas_dia(), a);
    setreporteVenta_anual(v_a);
};

void Reporte_Venta::agregar_venta(Venta vent)
{
    venta = vent;
};

