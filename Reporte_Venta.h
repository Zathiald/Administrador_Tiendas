#include <iostream>

using namespace std;

class Reporte_Venta : private Venta
{
public:
    float getreporteVenta_dias();
    void setreporteVenta_dias(float);
    float getreporteVenta_mes();
    void setreporteVenta_mes(float);
    float getreporteVenta_anual();
    void setreporteVenta_anual(float);
    float prediccion(float, float);

private:
    float reporteVenta_dias;
    float reporteVenta_mes;
    float reporteVenta_anual;
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

float Reporte_Venta::prediccion(float v, float t) 
{
    return v * t;
}
