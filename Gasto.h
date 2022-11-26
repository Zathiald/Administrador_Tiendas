#include <iostream>

using namespace std;

class Gasto
{
public:
    float getGastosDia();
    void setGastosDia(float);
    float getGastosMes();
    void setGastosMes(float);
    float getGastosAnual();
    void setGastosAnual(float);


private:
    float gastosDia;
    float gastosMes;
    float gastosAnual;
};

void Gasto::setGastosDia(float gasto_Dia)
{
    gastosDia = gasto_Dia;
}

float Gasto::getGastosDia()
{
    return gastosDia;
}

void Gasto::setGastosMes(float gasto_Mes)
{
    gastosMes = gasto_Mes;
}

float Gasto::getGastosMes()
{
    return gastosMes;
}

void Gasto::setGastosAnual(float gasto_Anual)
{
    gastosAnual = gasto_Anual;
}

float Gasto::getGastosAnual()
{
    return gastosAnual;
}

