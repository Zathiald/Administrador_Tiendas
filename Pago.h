//Creación de la clase de Venta, usado para almacenar todos los datos relacionados al pago
//Creación: 17/11/22
#include <iostream>

using namespace std;

class Pago{

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

//Funcion:Darle nuevo valor a la variable de pago para empleados
//Parametros: Se toma un parametro de float para darle ese valor a la variable de pago para empleados
//Retorno: Al ser una función void no se tiene un retorno en sí,solo se actualiza el valor de la variable
void Pago::setPagosEmpleado(float pago_Empleado){

    pagoEmpleado = pago_Empleado;
};

//Funcion:Regresar el valor de la variable de pago para empleados
//Parametros: Al ser un getter no se obtienen parametros, solo se regresa un valor
//Retorno: Se regresa el valor de la variable de pago para empleados
float Pago::getPagosEmpleado(){

    return pagoEmpleado;
};

//Funcion:Darle nuevo valor a la variable de pago para la luz
//Parametros: Se toma un parametro de float para darle ese valor a la variable de pago para la luz
//Retorno: Al ser una función void no se tiene un retorno en sí,solo se actualiza el valor de la variable
void Pago::setPagosLuz(float pago_Luz){

    pagoLuz = pago_Luz;
};

//Funcion:Regresar el valor de la variable de pago para la lu<
//Parametros: Al ser un getter no se obtienen parametros, solo se regresa un valor
//Retorno: Se regresa el valor de la variable de pago para la luz
float Pago::getPagosLuz(){

    return pagoLuz;
};

//Funcion:Darle nuevo valor a la variable de pago para el agua
//Parametros: Se toma un parametro de float para darle ese valor a la variable de pago para el agua
//Retorno: Al ser una función void no se tiene un retorno en sí,solo se actualiza el valor de la variable
void Pago::setPagosAgua(float pago_Agua){

    pagoAgua = pago_Agua;
};

//Funcion:Regresar el valor de la variable de pago para el agua
//Parametros: Al ser un getter no se obtienen parametros, solo se regresa un valor
//Retorno: Se regresa el valor de la variable de pago para el agua
float Pago::getPagosAgua(){

    return pagoAgua;
};


