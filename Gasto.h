//Creación de la clase de gASTO, usado para almacenar todos los datos relacionados al gasto
//Creación: 17/11/22
#include <iostream>

using namespace std;

class Gasto{

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

//Funcion:Darle nuevo valor a la variable de gastos por dia
//Parametros: Se toma un parametro de float para darle ese valor a la variable de gastos por dia
//Retorno: Al ser una función void no se tiene un retorno en sí,solo se actualiza el valor de la variable
void Gasto::setGastosDia(float gasto_Dia){

    gastosDia = gasto_Dia;
};

//Funcion:Regresar el valor de la variable de gastos por dia
//Parametros: Al ser un getter no se obtienen parametros, solo se regresa un valor
//Retorno: Se regresa el valor de la variable de gastos por dia
float Gasto::getGastosDia(){

    return gastosDia;
};

//Funcion:Darle nuevo valor a la variable de gastos por mes
//Parametros: Se toma un parametro de float para darle ese valor a la variable de gastos por mes
//Retorno: Al ser una función void no se tiene un retorno en sí,solo se actualiza el valor de la variable
void Gasto::setGastosMes(float gasto_Mes){

    gastosMes = gasto_Mes;
};

//Funcion:Regresar el valor de la variable de gastos por mes
//Parametros: Al ser un getter no se obtienen parametros, solo se regresa un valor
//Retorno: Se regresa el valor de la variable de gastos por mes
float Gasto::getGastosMes(){

    return gastosMes;
};

//Funcion:Darle nuevo valor a la variable de gastos por año
//Parametros: Se toma un parametro de float para darle ese valor a la variable de ventas por dia
//Retorno: Al ser una función void no se tiene un retorno en sí,solo se actualiza el valor de la variable
void Gasto::setGastosAnual(float gasto_Anual){

    gastosAnual = gasto_Anual;
};

//Funcion:Regresar el valor de la variable de gastos por año
//Parametros: Al ser un getter no se obtienen parametros, solo se regresa un valor
//Retorno: Se regresa el valor de la variable de gastos por año
float Gasto::getGastosAnual(){

    return gastosAnual;
};

