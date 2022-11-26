#include <iostream>

using namespace std;

class Venta
{
public:
    float getVentasDia();
    void setVentasDia(float);
    float getVentasMes();
    void setVentasMes(float);
    float getVentasAnual();
    void setVentasAnual(float);

private:
    float ventasDia;
    float ventasMes;
    float ventasAnual;
}; 

void Venta::setVentasDia(float venta_Dia)
{
    ventasDia = venta_Dia;
}

float Venta::getVentasDia()
{
    return ventasDia;
}

void Venta::setVentasMes(float venta_Mes)
{
    ventasMes = venta_Mes;
}

float Venta::getVentasMes()
{
    return ventasMes;
}

void Venta::setVentasAnual(float venta_Anual)
{
    ventasAnual = venta_Anual;
}

float Venta::getVentasAnual()
{
    return ventasAnual;
}


