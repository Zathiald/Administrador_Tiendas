#include <iostream>

using namespace std;

class Pago
{
public:
    float getPagosEmpleado();
    void setPagosEmpleado(float);
    float getPagosLuz();
    void setPagosLuz(float);
    float getPagosAgua();
    void setPagosAgua(float);

private:
    float pagoEmpleado;
    float pagoLuz;
    float pagoAgua;
};

void Pago::setPagosEmpleado(float pago_Empleado)
{
    pagoEmpleado = pago_Empleado;
}

float Pago::getPagosEmpleado()
{
    return pagoEmpleado;
}

void Pago::setPagosLuz(float pago_Luz)
{
    pagoLuz = pago_Luz;
}

float Pago::getPagosLuz()
{
    return pagoLuz;
}

void Pago::setPagosAgua(float pago_Agua)
{
    pagoAgua = pago_Agua;
}

float Pago::getPagosAgua()
{
    return pagoAgua;
}


