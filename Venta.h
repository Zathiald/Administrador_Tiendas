//Creación de la clase de Venta, usado para almacenar todos los datos relacionados a la venta
//Creación: 17/11/22
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

//Funcion:Darle nuevo valor a la variable de ventas por dia
//Parametros: Se toma un parametro de float para darle ese valor a la variable de ventas por dia
//Retorno: Al ser una función void no se tiene un retorno en sí,solo se actualiza el valor de la variable
void Venta::setVentasDia(float venta_Dia)
{
    ventasDia = venta_Dia;
};

//Funcion:Regresar el valor de la variable de ventas por dia
//Parametros: Al ser un getter no se obtienen parametros, solo se regresa un valor
//Retorno: Se regresa el valor de la variable de venta por dia
float Venta::getVentasDia()
{
    return ventasDia;
};

//Funcion:Darle nuevo valor a la variable de ventas por mes
//Parametros: Se toma un parametro de float para darle ese valor a la variable de ventas por mes
//Retorno: Al ser una función void no se tiene un retorno en sí,solo se actualiza el valor de la variable
void Venta::setVentasMes(float venta_Mes)
{
    ventasMes = venta_Mes;
};

//Funcion:Regresar el valor de la variable de ventas por mes
//Parametros: Al ser un getter no se obtienen parametros, solo se regresa un valor
//Retorno: Se regresa el valor de la variable de venta por mes
float Venta::getVentasMes()
{
    return ventasMes;
};

//Funcion:Darle nuevo valor a la variable de ventas por año
//Parametros: Se toma un parametro de float para darle ese valor a la variable de ventas por año
//Retorno: Al ser una función void no se tiene un retorno en sí,solo se actualiza el valor de la variable
void Venta::setVentasAnual(float venta_Anual)
{
    ventasAnual = venta_Anual;
};

//Funcion:Regresar el valor de la variable de ventas por año
//Parametros: Al ser un getter no se obtienen parametros, solo se regresa un valor
//Retorno: Se regresa el valor de la variable de venta por año
float Venta::getVentasAnual()
{
    return ventasAnual;
};


