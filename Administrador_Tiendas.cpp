//Código principal que va a utilizar todas las clases establecidas para generar los reportes que el usuario pida
//Creación: 10/11/22
#include <iostream>
#include "Venta.h"
#include "Gasto.h"
#include "Pago.h"
#include "Inventario.h"
#include "Reporte_Venta.h"
#include "Reporte_Gasto.h"
#include "Reporte_Pago.h"
#include "Reporte.h"
#include <math.h>
#include <list>
#include <vector>

using namespace std;

Venta venta;
Gasto gasto;
Pago pago;
Inventario inventario;
Reporte reporte;
Reporte_Venta reporteventa;
Reporte_Gasto reportegasto;
Reporte_Pago reportepago;
void reportarGen();
void reportarInv();
void reportarPago();
void reportarGasto();
void reportarVenta();
void agregarInv();
void quitarInv();
void menuVentas();
void menuGastos();
void menuPagos();
void menuInv();
void menuRep();
void menu();

//Función: La función tiene de por fin el dar un reporte general del dinero total en dias, meses y futuro
//también se muestran todas las listas de los diferentes inventarios
//Parametros: No se tienen parametros en si, pero si se usan funciones de cada una de las clases creadas, también se tienen inputs para dias,meses y años, para hacer la predicción
//Retorno: Al ser void no hay retorno explicito, pero lo que se da de regreso es un reporte general sobra cada una de las variables
void reportarGen(){

    float pagos = pago.getPagosAgua() + pago.getPagosEmpleado() + pago.getPagosLuz();
    cout << "------REPORTE GENERAL------" << endl;
    cout << "--------------------------------------" << endl;
    cout << "------REPORTE TOTAL DINERO EN DIAS------" << endl;
    int dia;
    cout << "Ingresa el numero de dias a futuro: " << endl;
    cin >> dia;
    reporteventa.reportarDias(reporte, dia);
    float ventaDia = reporteventa.getReporteVentaDias();
    reportegasto.reportarDias(reporte, dia);
    float gastoDia = reportegasto.getReporteGastoDias();
    float pagosDia = pagos / 7;
    reportepago.reportarDias(reporte, pagosDia, dia);
    float pagoDia = reportepago.getReportePagoDias();
    float totalDia = ventaDia - (gastoDia + pagoDia);
    cout << "Dinero total despues de " << dia << " dias a futuro: " << totalDia << endl;
    cout << "--------------------------------------" << endl;
    cout << "------REPORTE TOTAL DINERO EN MESES------" << endl;
    int mes;
    cout << "Ingresa el numero de meses a futuro: " << endl;
    cin >> mes;
    reporteventa.reportarMes(reporte, mes);
    float ventaMes = reporteventa.getReporteVentaMes();
    reportegasto.reportarMes(reporte, mes);
    float gastoMes = reportegasto.getReporteGastoMes();
    float pagosMes = pagos * 4;
    reportepago.reportarMes(reporte, pagosMes, mes);
    float pagoMes = reportepago.getReportePagoMes();
    float totalMes = ventaMes - (gastoMes + pagoMes);
    cout << "Dinero total despues de " << mes << " meses a futuro: " << totalMes << endl;
    cout << "--------------------------------------" << endl;
    cout << "------REPORTE TOTAL DINERO EN ANIOS------" << endl;
    int anio;
    cout << "Ingresa el numero de anios a futuro: " << endl;
    cin >> anio;
    reporteventa.reportarAnual(reporte, anio);
    float ventaAnual = reporteventa.getReporteVentaAnual();
    reportegasto.reportarAnual(reporte, anio);
    float gastoAnual = reportegasto.getReporteGastoAnual();
    float pagosAnual = pagos * 52;
    reportepago.reportarAnual(reporte, pagosAnual, anio);
    float pagoAnual = reportepago.getReportePagoAnual();
    float totalAnual = ventaAnual - (gastoAnual + pagoAnual);
    cout << "Dinero total despues de " << anio << " anios a futuro: " << totalAnual << endl;
    cout << "--------------------------------------" << endl;
    cout << "------INVENTARIO DE FRUTAS------" << endl;
    inventario.printFruta();
    cout << "--------------------------------------" << endl;
    cout << "------INVENTARIO DE VEGETALES------" << endl;
    inventario.printVegetal();
    cout << "--------------------------------------" << endl;
    cout << "------INVENTARIO DE CARNES------" << endl;
    inventario.printCarne();
    cout << "--------------------------------------" << endl;
    cout << "------INVENTARIO DE ELECTRONICOS------" << endl;
    inventario.printElectro();
    cout << "--------------------------------------" << endl;
    menuRep();
};

//Función: La función tiene de por fin el dar un reporte del inventario que escoga el usuario
//Parametros: No se tienen parametros en si, pero si se usan funciones de la clase de Inventario y un integer para decidir que inventario mostrar
//Retorno: Al ser void no hay retorno explicito, lo que se hace es llamar a otras funciones y mostrar variables
void reportarInv(){

    int inv_op;
    cout << "Selecciona el inventario del que quieres generar reporte" << endl;
    cout << "1 - Frutas" << endl;
    cout << "2 - Vegetales" << endl;
    cout << "3 - Carnes" << endl;
    cout << "4 - Electronicos" << endl;
    cout << "5 - Salir" << endl;
    cin >> inv_op;
    do
    {
        if (inv_op == 1)
        {
            cout << "Inventario de Frutas" << endl;
            cout << "--------------------------------------" << endl;
            inventario.printFruta();
            cout << "--------------------------------------" << endl;
            reportarInv();
        }
        if (inv_op == 2)
        {
            cout << "Inventario de Vegetales" << endl;
            cout << "--------------------------------------" << endl;
            inventario.printVegetal();
            cout << "--------------------------------------" << endl;
            reportarInv();
        }
        if (inv_op == 3)
        {
            cout << "Inventario de Carnes" << endl;
            cout << "--------------------------------------" << endl;
            inventario.printCarne();
            cout << "--------------------------------------" << endl;
            reportarInv();
        }
        if (inv_op == 4)
        {
            cout << "Inventario de Electronicos" << endl;
            cout << "--------------------------------------" << endl;
            inventario.printElectro();
            cout << "--------------------------------------" << endl;
            reportarInv();
        }
        if (inv_op == 5)
        {
            cout << "Regresando al menu..." << endl;
            cout << "--------------------------------------" << endl;
            menuRep();
        }
    } while (inv_op == 1 || inv_op == 2 || inv_op == 3 || inv_op == 4 || inv_op == 5);
    if (inv_op != 1 && inv_op != 2 && inv_op != 3 && inv_op != 4 && inv_op != 5)
    {
        cout << "Esa no es una opcion valida, escoge bien" << endl;
        cout << "--------------------------------------" << endl;
        reportarInv();
    }
};

//Función: La función tiene de por fin el dar un reporte de pago, dependiendo de la que escoga el usuario
//Parametros: No se tienen parametros en si, pero si se usan funciones de la clase de Reporte de Pago
//,también se tienen integers para definir que periodo de tiempo analizar y a cuanto tiempo a futuro y un float de los diferentes tipos de pagos sumados, la cual se altera segun el periodo de tiempo que se quiere ver
//Retorno: Al ser void no hay retorno explicito, lo que se hace es llamar a otras funciones y mostrar variables
void reportarPago(){

    int opcionGasto;
    float pagos = pago.getPagosAgua() + pago.getPagosEmpleado() + pago.getPagosLuz();
    cout << "Que tipo de pago quieres hacer reporte: " << endl;
    cout << "1 - Pago diario" << endl;
    cout << "2 - Pago mensual" << endl;
    cout << "3 - Pago anual" << endl;
    cin >> opcionGasto;
    do
    {
        if (opcionGasto == 1)
        {
            int dia;
            cout << "A cuantos dias a futuro quieres ver: " << endl;
            cin >> dia;
            reportepago.reportarDias(reporte, pagos / 7, dia);
            cout << "Pagos en " << dia << " dias: " << reportepago.getReportePagoDias() << endl;
            cout << "--------------------------------------" << endl;
            reportarPago();
        }
        if (opcionGasto == 2)
        {
            int mes;
            cout << "A cuantos meses a futuro quieres ver: " << endl;
            cin >> mes;
            reportepago.reportarMes(reporte, pagos * 4, mes);
            cout << "Pagos en " << mes << " meses: " << reportepago.getReportePagoMes() << endl;
            cout << "--------------------------------------" << endl;
            reportarPago();
        }
        if (opcionGasto == 3)
        {
            int anio;
            cout << "A cuantos años a futuro quieres ver: " << endl;
            cin >> anio;
            reportepago.reportarAnual(reporte, pagos * 52, anio);
            cout << "Pagos en " << anio << " años: " << reportepago.getReportePagoAnual() << endl;
            cout << "--------------------------------------" << endl;
            reportarPago();
        }
        if (opcionGasto == 4)
        {
            cout << "Regresando al menu..." << endl;
            cout << "--------------------------------------" << endl;
            menuRep();
        }
    } while (opcionGasto == 1 || opcionGasto == 2 || opcionGasto == 3 || opcionGasto == 4);
    if (opcionGasto != 1 && opcionGasto != 2 && opcionGasto != 3 && opcionGasto != 4)
    {
        cout << "Esa no es una opcion valida, escoge bien" << endl;
        cout << "--------------------------------------" << endl;
        reportarPago();
    }
};

//Función: La función tiene de por fin el dar un reporte de gasto, dependiendo de la que escoga el usuario
//Parametros: No se tienen parametros en si, pero si se usan funciones de la clase de Reporte de Gasto, también se tienen integers para definir que periodo de tiempo analizar y a cuanto tiempo a futuro
//Retorno: Al ser void no hay retorno explicito, lo que se hace es llamar a otras funciones y mostrar variables
void reportarGasto(){

    int opcionGasto;
    cout << "Que tipo de gasto quieres hacer reporte: " << endl;
    cout << "1 - Gasto diario" << endl;
    cout << "2 - Gasto mensual" << endl;
    cout << "3 - Gasto anual" << endl;
    cout << "4 - Regresar" << endl;
    cin >> opcionGasto;
    do
    {
        if (opcionGasto == 1)
        {
            int dia;
            cout << "A cuantos dias a futuro quieres ver: " << endl;
            cin >> dia;
            reportegasto.reportarDias(reporte, dia);
            cout << "Gastos en " << dia << " dias: " << reportegasto.getReporteGastoDias() << endl;
            cout << "--------------------------------------" << endl;
            reportarGasto();
        }
        if (opcionGasto == 2)
        {
            int mes;
            cout << "A cuantos meses a futuro quieres ver: " << endl;
            cin >> mes;
            reportegasto.reportarMes(reporte, mes);
            cout << "Gastos en " << mes << " meses: " << reportegasto.getReporteGastoMes() << endl;
            cout << "--------------------------------------" << endl;
            reportarGasto();
        }
        if (opcionGasto == 3)
        {
            int anio;
            cout << "A cuantos años a futuro quieres ver: " << endl;
            cin >> anio;
            reportegasto.reportarAnual(reporte, anio);
            cout << "Gastos en " << anio << " anos: " << reportegasto.getReporteGastoAnual() << endl;
            cout << "--------------------------------------" << endl;
            reportarGasto();
        }
        if (opcionGasto == 4)
        {
            cout << "Regresando al menu..." << endl;
            cout << "--------------------------------------" << endl;
            menuRep();
        }
    } while (opcionGasto == 1 || opcionGasto == 2 || opcionGasto == 3 || opcionGasto == 4);
    if (opcionGasto != 1 && opcionGasto != 2 && opcionGasto != 3 && opcionGasto != 4)
    {
        cout << "Esa no es una opcion valida, escoge bien" << endl;
        cout << "--------------------------------------" << endl;
        reportarGasto();
    }
};

//Función: La función tiene de por fin el dar un reporte de venta, dependiendo de la que escoga el usuario
//Parametros: No se tienen parametros en si, pero si se usan funciones de la clase de Reporte de Venta, también se tienen integers para definir que periodo de tiempo analizar y a cuanto tiempo a futuro
//Retorno: Al ser void no hay retorno explicito, lo que se hace es llamar a otras funciones y mostrar variables
void reportarVenta(){

    int opcionVenta;
    cout << "Que tipo de venta quieres hacer reporte: " << endl;
    cout << "1 - Venta diaria" << endl;
    cout << "2 - Venta mensual" << endl;
    cout << "3 - Venta anual" << endl;
    cout << "4 - Regresar" << endl;
    cin >> opcionVenta;
    do
    {
        if (opcionVenta == 1)
        {
            int dia;
            cout << "A cuantos dias a futuro quieres ver: " << endl;
            cin >> dia;
            reporteventa.reportarDias(reporte, dia);
            cout << "Ventas en " << dia << " dias: " << reporteventa.getReporteVentaDias() << endl;
            cout << "--------------------------------------" << endl;
            reportarVenta();
        }
        if (opcionVenta == 2)
        {
            int mes;
            cout << "A cuantos meses a futuro quieres ver: " << endl;
            cin >> mes;
            reporteventa.reportarMes(reporte, mes);
            cout << "Ventas en " << mes << " meses: " << reporteventa.getReporteVentaMes() << endl;
            cout << "--------------------------------------" << endl;
            reportarVenta();
        }
        if (opcionVenta == 3)
        {
            int anio;
            cout << "A cuantos años a futuro quieres ver: " << endl;
            cin >> anio;
            reporteventa.reportarAnual(reporte, anio);
            cout << "Ventas en " << anio << " años: " << reporteventa.getReporteVentaAnual() << endl;
            cout << "--------------------------------------" << endl;
            reportarVenta();
        }
        if (opcionVenta == 4)
        {
            cout << "Regresando al menu..." << endl;
            cout << "--------------------------------------" << endl;
            menuRep();
        }
    } while (opcionVenta == 1 || opcionVenta == 2 || opcionVenta == 3 || opcionVenta == 4);
    if (opcionVenta != 1 && opcionVenta != 2 && opcionVenta != 3 && opcionVenta != 4)
    {
        cout << "Esa no es una opcion valida, escoge bien" << endl;
        cout << "--------------------------------------" << endl;
        reportarVenta();
    }
};

//Función: La función tiene de por fin llamar a las funciones de agregar definidas en la clase de Inventario, esto depende de cual escoga el usuario
//Parametros: No se tienen parametros en si, pero si se usan funciones de la clase de Inventario, también se tienen integers para definir que inventario alterar
//Retorno: Al ser void no hay retorno explicito, lo que se hace es llamar a otras funciones y alterar variables
void agregarInv(){

    int opcionAgregar;
    cout << ("Selecciona el inventario al que le quieres agregar") << endl;
    cout << ("1 - Frutas") << endl;
    cout << ("2 - Vegetales") << endl;
    cout << ("3 - Carnes") << endl;
    cout << ("4 - Electronicos") << endl;
    cin >> opcionAgregar;
    cout << "--------------------------------------" << endl;
    do
    {
        if (opcionAgregar == 1)
        {
            inventario.agregarFruta();
            cout << "--------------------------------------" << endl;
            menuInv();
        }
        if (opcionAgregar == 2)
        {
            inventario.agregarVegetal();
            cout << "--------------------------------------" << endl;
            menuInv();
        }
        if (opcionAgregar == 3)
        {
            inventario.agregarCarne();
            cout << "--------------------------------------" << endl;
            menuInv();
        }
        if (opcionAgregar == 4)
        {
            inventario.agregarElectro();
            cout << "--------------------------------------" << endl;
            menuInv();
        }
    } while (opcionAgregar == 1 || opcionAgregar == 2 || opcionAgregar == 3 || opcionAgregar == 4);

    if (opcionAgregar != 1 && opcionAgregar != 2 && opcionAgregar != 3 && opcionAgregar != 4)
    {
        cout << "Esa no es una opcion valida, escoge bien" << endl;
        cout << "--------------------------------------" << endl;
        agregarInv();
    }
};

//Función: La función tiene de por fin llamar a las funciones de quitar definidas en la clase de Inventario, esto depende de cual escoga el usuario
//Parametros: No se tienen parametros en si, pero si se usan funciones de la clase de Inventario, también se tiene un integer para definir que inventario alterar
//Retorno: Al ser void no hay retorno explicito, lo que se hace es llamar a otras funciones y alterar variables
void quitarInv(){

    int opcionQuitar;
    cout << ("Selecciona el inventario al que le quieres quitar") << endl;
    cout << ("1 - Frutas") << endl;
    cout << ("2 - Vegetales") << endl;
    cout << ("3 - Carnes") << endl;
    cout << ("4 - Electronicos") << endl;
    cin >> opcionQuitar;
    cout << "--------------------------------------" << endl;
    do
    {
        if (opcionQuitar == 1)
        {
            inventario.quitarFruta();
            cout << "--------------------------------------" << endl;
            menuInv();
        }
        if (opcionQuitar == 2)
        {
            inventario.quitarVegetal();
            cout << "--------------------------------------" << endl;
            menuInv();
        }
        if (opcionQuitar == 3)
        {
            inventario.quitarCarne();
            cout << "--------------------------------------" << endl;
            menuInv();
        }
        if (opcionQuitar == 4)
        {
            inventario.quitarElectro();
            cout << "--------------------------------------" << endl;
            menuInv();
        }
    } while (opcionQuitar == 1 || opcionQuitar == 2 || opcionQuitar == 3 || opcionQuitar == 4);

    if (opcionQuitar != 1 && opcionQuitar != 2 && opcionQuitar != 3 && opcionQuitar != 4)
    {
        cout << "Esa no es una opcion valida, escoge bien" << endl;
        cout << "--------------------------------------" << endl;
        quitarInv();
    }
};

//Función: La función tiene de por fin llamar a los setters en la clase de Venta, esto depende de cual escoga el usuario
//Parametros: No se tienen parametros en si, pero si se usan funciones de la clase de Venta, también se tienen un integer para saber que tipo de venta registrar, incluyendo floats para darles el valor
//Retorno: Al ser void no hay retorno explicito, lo que se hace es llamar a otras funciones y alterar variables
void menuVentas(){

    int opcionVenta;
    cout << "Que tipo de ventas quieres registrar" << endl;
    cout << "1 - Venta diaria" << endl;
    cout << "2 - Venta mensual" << endl;
    cout << "3 - Venta anual" << endl;
    cout << "4 - Regresar" << endl;
    cin >> opcionVenta;
    do
    {
        if (opcionVenta == 1)
        {
            float ventaDia;
            cout << "Registra las ventas diarias: " << endl;
            cin >> ventaDia;
            venta.setVentasDia(ventaDia);
            cout << "--------------------------------------" << endl;
            menuVentas();
        }
        else if (opcionVenta == 2)
        {
            float ventaMes;
            cout << "Registra las ventas mensuales: " << endl;
            cin >> ventaMes;
            venta.setVentasMes(ventaMes);
            cout << "--------------------------------------" << endl;
            menuVentas();
        }
        else if (opcionVenta == 3)
        {
            float ventaAnual;
            cout << "Registra las ventas anuales: " << endl;
            cin >> ventaAnual;
            venta.setVentasAnual(ventaAnual);
            cout << "--------------------------------------" << endl;
            menuVentas();
        }
        else if (opcionVenta == 4)
        {
            cout << "Regresando al menu..." << endl;
            cout << "--------------------------------------" << endl;
            reporteventa.agregarVenta(venta);
            menu();
        }
    } while (opcionVenta == 1 || opcionVenta == 2 || opcionVenta == 3 || opcionVenta == 4);
    if (opcionVenta != 1 && opcionVenta != 2 && opcionVenta != 3 && opcionVenta != 4)
    {
        cout << "Esa no es una opcion valida, escoge bien" << endl;
        cout << endl;
        menuVentas();
    }
};

//Función: La función tiene de por fin llamar a los setters en la clase de Gasto, esto depende de cual escoga el usuario
//Parametros: No se tienen parametros en si, pero si se usan funciones de la clase de Gasto, también se tienen un integer para saber que tipo de venta registrar, incluyendo floats para darles el valor
//Retorno: Al ser void no hay retorno explicito, lo que se hace es llamar a otras funciones y alterar variables
void menuGastos(){

    int opcionGastos;
    cout << "Que tipo de gasto quieres registrar" << endl;
    cout << "1 - Gasto diario" << endl;
    cout << "2 - Gasto mensual" << endl;
    cout << "3 - Gasto anual" << endl;
    cout << "4 - Regresar" << endl;
    cin >> opcionGastos;
    do
    {
        if (opcionGastos == 1)
        {
            float gastoDia;
            cout << "Registra los gastos diarios: " << endl;
            cin >> gastoDia;
            gasto.setGastosDia(gastoDia);
            cout << "--------------------------------------" << endl;
            menuGastos();
        }
        if (opcionGastos == 2)
        {
            float gastoMes;
            cout << "Registra los gastos mensuales: " << endl;
            cin >> gastoMes;
            gasto.setGastosMes(gastoMes);
            cout << "--------------------------------------" << endl;
            menuGastos();
        }
        if (opcionGastos == 3)
        {
            float gastoAnual;
            cout << "Registra los gastos anuales: " << endl;
            cin >> gastoAnual;
            gasto.setGastosAnual(gastoAnual);
            cout << "--------------------------------------" << endl;
            menuGastos();
        }
        if (opcionGastos == 4)
        {
            cout << "Regresando al menu..." << endl;
            cout << "--------------------------------------" << endl;
            reportegasto.agregarGasto(gasto);
            menu();

        }
    } while (opcionGastos == 1 || opcionGastos == 2 || opcionGastos == 3 || opcionGastos == 4);
    if (opcionGastos != 1 && opcionGastos != 2 && opcionGastos != 3 && opcionGastos != 4)
    {
        cout << "Esa no es una opcion valida, escoge bien" << endl;
        cout << "--------------------------------------" << endl;
        menuGastos();
    }
};

//Función: La función tiene de por fin llamar a los setters en la clase de Pago, esto depende de cual escoga el usuario
//Parametros: No se tienen parametros en si, pero si se usan funciones de la clase de Pago, también se tienen un integer para saber que tipo de venta registrar, incluyendo floats para darles el valor
//Retorno: Al ser void no hay retorno explicito, lo que se hace es llamar a otras funciones y alterar variables
void menuPagos(){

    int opcionPago;
    cout << "Que tipo de pago quieres registrar" << endl;
    cout << "1 - Pago empleados" << endl;
    cout << "2 - Pago luz" << endl;
    cout << "3 - Pago agua" << endl;
    cout << "4 - Regresar" << endl;
    cin >> opcionPago;
    do
    {
        if (opcionPago == 1)
        {
            float pagoEmpleado;
            cout << "Registra los pagos a empleados (por semana): " << endl;
            cin >> pagoEmpleado;
            pago.setPagosEmpleado(pagoEmpleado);
            cout << "--------------------------------------" << endl;
            menuPagos();
        }
        if (opcionPago == 2)
        {
            float pagoLuz;
            cout << "Registra los pagos de luz (por semana): " << endl;
            cin >> pagoLuz;
            pago.setPagosLuz(pagoLuz);
            cout << "--------------------------------------" << endl;
            menuPagos();
        }
        if (opcionPago == 3)
        {
            float pagoAgua;
            cout << "Registra los pagos de agua (por semana): " << endl;
            cin >> pagoAgua;
            pago.setPagosAgua(pagoAgua);
            cout << "--------------------------------------" << endl;
            menuPagos();
        }
        if (opcionPago == 4)
        {
            cout << "Regresando al menu..." << endl;
            cout << "--------------------------------------" << endl;
            reportepago.agregarPago(pago);
            menu();
        }
    } while (opcionPago == 1 || opcionPago == 2 || opcionPago == 3 || opcionPago == 4);
    if (opcionPago != 1 && opcionPago != 2 && opcionPago != 3 && opcionPago != 4)
    {
        cout << "Esa no es una opcion valida, escoge bien" << endl;
        cout << "--------------------------------------" << endl;
        menuPagos();
    }
};

//Función: La función tiene de por fin llamar a las funciones de quitar y agregar inventarios, estas definidas en el main, esto para que el usuario navege por el menu
//Parametros: No se tienen parametros en si, pero si se tiene un integer para saber que opcion del menu se va a realizar
//Retorno: Al ser void no hay retorno explicito, lo que se hace es llamar a otras funciones 
void menuInv(){

    int opcionInv;
    cout << ("Selecciona que deseas hacer") << endl;
    cout << ("1 - Agregar") << endl;
    cout << ("2 - Quitar") << endl;
    cout << ("3 - Regresar") << endl;
    cin >> opcionInv;
    do
    {
        if (opcionInv == 1)
        {
            agregarInv();
            cout << "--------------------------------------" << endl;
            menuInv();
        }
        if (opcionInv == 2)
        {
            quitarInv();
            cout << "--------------------------------------" << endl;
            menuInv();
        }
        if (opcionInv == 3)
        {
            cout << "Regresando al menu..." << endl;
            cout << "--------------------------------------" << endl;
            menu();
        }
    } while (opcionInv == 1 || opcionInv == 2 || opcionInv == 3);
    if (opcionInv != 1 && opcionInv != 2 && opcionInv != 3)
    {
        cout << "Esa no es una opcion valida, escoge bien" << endl;
        cout << "--------------------------------------" << endl;
        menuInv();
    }
};

//Función: La función tiene de por fin llamar a las funciones de reportes definidas en el main, esto para que el usuario navege por el menu
//Parametros: No se tienen parametros en si, pero si se tiene un integer para saber que opcion del menu se va a realizar
//Retorno: Al ser void no hay retorno explicito, lo que se hace es llamar a otras funciones 
void menuRep(){

    int opReporte;
    cout << ("Selecciona el reporte que deseas generar") << endl;
    cout << ("1 - Reporte Ventas") << endl;
    cout << ("2 - Reporte Gastos") << endl;
    cout << ("3 - Reporte Pagos") << endl;
    cout << ("4 - Reporte Inventario") << endl;
    cout << ("5 - Reporte General") << endl;
    cout << ("6 - Regresar") << endl;
    cin >> opReporte;
    do
    {
        if (opReporte == 1)
        {

            reportarVenta();
            cout << "--------------------------------------" << endl;
        }
        if (opReporte == 2)
        {
            reportarGasto();
            cout << "--------------------------------------" << endl;
        }
        if (opReporte == 3)
        {
            reportarPago();
            cout << "--------------------------------------" << endl;
        }
        if (opReporte == 4)
        {
            reportarInv();
            cout << "--------------------------------------" << endl;
        }
        if (opReporte == 5)
        {
            reportarGen();
            cout << "--------------------------------------" << endl;
        }
        if (opReporte == 6)
        {
            cout << "Regresando al menu..." << endl;
            cout << "--------------------------------------" << endl;
            menu();
        }
    } while (opReporte == 1 || opReporte == 2 || opReporte == 3 || opReporte == 4 || opReporte == 5 || opReporte == 6);
    if (opReporte != 1 && opReporte != 2 && opReporte != 3 && opReporte != 4 && opReporte != 5 && opReporte != 6)
    {
        cout << "Esa no es una opcion valida, escoge bien" << endl;
        cout << "--------------------------------------" << endl;
        menuRep();
    }
};

//Función: La función tiene de por fin llamar a las funciones de menu definidas en el  main, este sera el punto de partida del proyecto y desde aquí el usuario se desplazara entre las opciones
//Parametros: No se tienen parametros en si, pero si se tiene un integer para saber que opcion del menu se va a realizar
//Retorno: Al ser void no hay retorno explicito, lo que se hace es llamar a otras funciones 
void menu(){

    int opcionMenu;
    cout << ("Selecciona que deseas hacer") << endl;
    cout << ("1 - Registrar ventas") << endl;
    cout << ("2 - Registrar gastos") << endl;
    cout << ("3 - Registrar inventario") << endl;
    cout << ("4 - Registrar pagos") << endl;
    cout << ("5 - Generar reporte") << endl;
    cout << ("6 - Salir") << endl;
    cin >> opcionMenu;
    do
    {
        if (opcionMenu == 1)
        {
            cout << "--------------------------------------" << endl;
            menuVentas();
        }
        if (opcionMenu == 2)
        {
            cout << "--------------------------------------" << endl;
            menuGastos();
        }
        if (opcionMenu == 3)
        {
            cout << "--------------------------------------" << endl;
            menuInv();
        }
        if (opcionMenu == 4)
        {
            cout << "--------------------------------------" << endl;
            menuPagos();
        }
        if (opcionMenu == 5)
        {
            cout << "--------------------------------------" << endl;
            menuRep();
        }
    } while (opcionMenu == 1 || opcionMenu == 2 || opcionMenu == 3 || opcionMenu == 4 || opcionMenu == 5);
    if (opcionMenu != 1 && opcionMenu != 2 && opcionMenu != 3 && opcionMenu != 4 && opcionMenu != 5)
    {
        cout << "Esa no es una opcion valida, escoge bien" << endl;
        cout << "--------------------------------------" << endl;
        menu();
    }
};

//Función: La función main que llama a la función de menu para iniciar el codigo
//Parametros: No se tienen parametros
//Retorno: Al ser un integer, se tiene un return 0 al final para definir que se ha acabado el código
int main(){

    menu();
    return 0;
};
