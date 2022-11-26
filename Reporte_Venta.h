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

float Reporte_Venta::getReporteVentaDias()
{
    return reporteVentaDias;
};

void Reporte_Venta::setReporteVentaDias(float ventas)
{
    reporteVentaDias = ventas;
};

float Reporte_Venta::getReporteVentaMes()
{
    return reporteVentaMes;
};

void Reporte_Venta::setReporteVentaMes(float ventas)
{
    reporteVentaMes = ventas;
};

float Reporte_Venta::getReporteVentaAnual()
{
    return reporteVentaAnual;
};

void Reporte_Venta::setReporteVentaAnual(float ventas)
{
    reporteVentaAnual = ventas;
};

void Reporte_Venta::reportarDias(Reporte reporte,int dia)
{
    float v_d = reporte.prediccion(venta.getVentasDia(), dia);
    setReporteVentaDias(v_d);
};

void Reporte_Venta::reportarMes(Reporte reporte,int mes)
{
    float v_m = reporte.prediccion(venta.getVentasMes(), mes);
    setReporteVentaMes(v_m);
};

void Reporte_Venta::reportarAnual(Reporte reporte,int anio)
{
    float v_a = reporte.prediccion(venta.getVentasAnual(), anio);
    setReporteVentaAnual(v_a);
};

void Reporte_Venta::agregarVenta(Venta vent)
{
    venta = vent;
};

