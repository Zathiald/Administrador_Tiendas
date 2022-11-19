#include <iostream>

using namespace std;

class Venta
{
public:
    float getVentas_dia();
    void setVentas_dia(float);
    float getVentas_mes();
    void setVentas_mes(float);
    float getVentas_anual();
    void setVentas_anual(float);

private:
    float ventas_dia;
    float ventas_mes;
    float ventas_anual;
}; 

void Venta::setVentas_dia(float v_d)
{
    ventas_dia = v_d;
}

float Venta::getVentas_dia()
{
    return ventas_dia;
}

void Venta::setVentas_mes(float v_m)
{
    ventas_mes = v_m;
}

float Venta::getVentas_mes()
{
    return ventas_mes;
}

void Venta::setVentas_anual(float v_a)
{
    ventas_anual = v_a;
}

float Venta::getVentas_anual()
{
    return ventas_anual;
}


