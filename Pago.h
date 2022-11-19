#include <iostream>

using namespace std;

class Pago
{
public:
    float getPagos_empleado();
    void setPagos_empleado(float);
    float getPagos_luz();
    void setPagos_luz(float);
    float getPagos_agua();
    void setPagos_agua(float);

private:
    float pago_empleado;
    float pago_luz;
    float pago_agua;
};

void Pago::setPagos_empleado(float p_e)
{
    pago_empleado = p_e;
}

float Pago::getPagos_empleado()
{
    return pago_empleado;
}

void Pago::setPagos_luz(float p_l)
{
    pago_luz = p_l;
}

float Pago::getPagos_luz()
{
    return pago_luz;
}

void Pago::setPagos_agua(float p_a)
{
    pago_agua = p_a;
}

float Pago::getPagos_agua()
{
    return pago_agua;
}


