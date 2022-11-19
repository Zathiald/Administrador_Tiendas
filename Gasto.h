#include <iostream>

using namespace std;

class Gasto
{
public:
    float getGastos_dia();
    void setGastos_dia(float);
    float getGastos_mes();
    void setGastos_mes(float);
    float getGastos_anual();
    void setGastos_anual(float);


private:
    float gastos_dia;
    float gastos_mes;
    float gastos_anual;
};

void Gasto::setGastos_dia(float g_d)
{
    gastos_dia = g_d;
}

float Gasto::getGastos_dia()
{
    return gastos_dia;
}

void Gasto::setGastos_mes(float g_m)
{
    gastos_mes = g_m;
}

float Gasto::getGastos_mes()
{
    return gastos_mes;
}

void Gasto::setGastos_anual(float g_a)
{
    gastos_anual = g_a;
}

float Gasto::getGastos_anual()
{
    return gastos_anual;
}

