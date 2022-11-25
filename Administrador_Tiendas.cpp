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
void agregar_inv();
void quitar_inv();
void menu_ventas();
void menu_gastos();
void menu_pagos();
void menu_inv();
void menu_rep();
void menu();


void reportarGen()
{
    float pagos = pago.getPagos_agua() + pago.getPagos_empleado() + pago.getPagos_luz();
    cout << "------REPORTE GENERAL------" << endl;
    cout << "--------------------------------------" << endl;
    cout << "------REPORTE TOTAL DINERO EN DIAS------" << endl;
    int d;
    cout << "Ingresa el numero de dias a futuro: " << endl;
    cin >> d;
    reporteventa.reportar_dias(reporte, d);
    float venta_d = reporteventa.getreporteVenta_dias();
    reportegasto.reportar_dias(reporte, d);
    float gasto_d = reportegasto.getreporteGasto_dias();
    reportepago.reportar_dias(reporte,pagos/7,d);
    float pago_d = reportepago.getreportePago_dias();
    float total_d = venta_d - (gasto_d + pago_d);
    cout << "Dinero total despues de " << d << " dias a futuro: " << total_d<<endl;
    cout << "--------------------------------------" << endl;
    cout << "------REPORTE TOTAL DINERO EN MESES------" << endl;
    int m;
    cout << "Ingresa el numero de meses a futuro: " << endl;
    cin >> m;
    reporteventa.reportar_mes(reporte, m);
    float venta_m = reporteventa.getreporteVenta_mes();
    reportegasto.reportar_mes(reporte, m);
    float gasto_m = reportegasto.getreporteGasto_mes();
    reportepago.reportar_mes(reporte,pagos*4, m);
    float pago_m = reportepago.getreportePago_mes();
    float total_m = venta_m - (gasto_m + pago_m);
    cout << "Dinero total despues de " << m << " meses a futuro: " << total_m << endl;
    cout << "--------------------------------------" << endl;
    cout << "------REPORTE TOTAL DINERO EN ANIOS------" << endl;
    int a;
    cout << "Ingresa el numero de anios a futuro: " << endl;
    cin >> a;
    reporteventa.reportar_anual(reporte, d);
    float venta_a=reporteventa.getreporteVenta_anual();
    reportegasto.reportar_anual(reporte, d);
    float gasto_a = reportegasto.getreporteGasto_anual();
    reportepago.reportar_anual(reporte, pagos*52, d);
    float pago_a = reportepago.getreportePago_anual();
    float total_a = venta_a - (gasto_a + pago_a);
    cout << "Dinero total despues de " << a << " anios a futuro: " << total_a << endl;
    cout << "--------------------------------------" << endl;
    cout << "------INVENTARIO DE FRUTAS------";
    inventario.printfruta();
    cout << "--------------------------------------" << endl;
    cout << "------INVENTARIO DE VEGETALES------";
    inventario.printvegetal();
    cout << "--------------------------------------" << endl;
    cout << "------INVENTARIO DE CARNES------";
    inventario.printcarne();
    cout << "--------------------------------------" << endl;
    cout << "------INVENTARIO DE ELECTRONICOS------";
    inventario.printelectro();
    cout << "--------------------------------------" << endl;
    menu_rep();
}

void reportarInv()
{
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
            inventario.printfruta();
            cout << "--------------------------------------" << endl;
            reportarInv();
        }
        if (inv_op == 2)
        {
            cout << "Inventario de Vegetales" << endl;
            cout << "--------------------------------------" << endl;
            inventario.printvegetal();
            cout << "--------------------------------------" << endl;
            reportarInv();
        }
        if (inv_op == 3)
        {
            cout << "Inventario de Carnes" << endl;
            cout << "--------------------------------------" << endl;
            inventario.printcarne();
            cout << "--------------------------------------" << endl;
            reportarInv();
        }
        if (inv_op == 4)
        {
            cout << "Inventario de Electronicos" << endl;
            cout << "--------------------------------------" << endl;
            inventario.printelectro();
            cout << "--------------------------------------" << endl;
            reportarInv();
        }
        if (inv_op == 5)
        {
            cout << "Regresando al menu..." << endl;
            cout << "--------------------------------------" << endl;
            menu_rep();
        }
    } while (inv_op == 1 || inv_op == 2 || inv_op == 3 || inv_op == 4 || inv_op == 5);
    if (inv_op != 1 && inv_op != 2 && inv_op != 3 && inv_op != 4 && inv_op != 5)
    {
        cout << "Esa no es una opcion valida, escoge bien" << endl;
        cout << "--------------------------------------" << endl;
        reportarInv();
    }
}

void reportarPago()
{
    int p_rp;
    float pagos = pago.getPagos_agua() + pago.getPagos_empleado() + pago.getPagos_luz();
    cout << "Que tipo de pago quieres hacer reporte: " << endl;
    cout << "1 - Pago diario" << endl;
    cout << "2 - Pago mensual" << endl;
    cout << "3 - Pago anual" << endl;
    cin >> p_rp;
    do
    {
        if (p_rp == 1)
        {
            int d;
            cout << "A cuantos dias a futuro quieres ver: " << endl;
            cin >> d;
            reportepago.reportar_dias(reporte,pagos/7,d);
            cout << "Pagos en " << d << " dias: " << reportepago.getreportePago_dias()<<endl;
            cout << "--------------------------------------" << endl;
            reportarPago();
        }
        if (p_rp == 2)
        {
            int m;
            cout << "A cuantos meses a futuro quieres ver: " << endl;
            cin >> m;
            reportepago.reportar_mes(reporte,pagos*4, m);
            cout << "Pagos en " << m << " meses: " << reportepago.getreportePago_mes()<<endl;
            cout << "--------------------------------------" << endl;
            reportarPago();
        }
        if (p_rp == 3)
        {
            int a;
            cout << "A cuantos años a futuro quieres ver: " << endl;
            cin >> a;
            reportepago.reportar_anual(reporte,pagos*52, a);
            cout << "Pagos en " << a << " años: " << reportepago.getreportePago_anual()<<endl;
            cout << "--------------------------------------" << endl;
            reportarPago();
        }
        if (p_rp == 4)
        {
            cout << "Regresando al menu..." << endl;
            cout << "--------------------------------------" << endl;
            menu_rep();
        }
    } while (p_rp == 1 || p_rp == 2 || p_rp == 3 || p_rp == 4);
    if (p_rp != 1 && p_rp != 2 && p_rp != 3 && p_rp != 4)
    {
        cout << "Esa no es una opcion valida, escoge bien" << endl;
        cout << "--------------------------------------" << endl;
        reportarPago();
    }
}

void reportarGasto()
{
    int g_rp;
    cout << "Que tipo de gasto quieres hacer reporte: " << endl;
    cout << "1 - Gasto diario" << endl;
    cout << "2 - Gasto mensual" << endl;
    cout << "3 - Gasto anual" << endl;
    cout << "4 - Regresar" << endl;
    cin >> g_rp;
    do
    {
        if (g_rp == 1)
        {
            int d;
            cout << "A cuantos dias a futuro quieres ver: " << endl;
            cin >> d;
            reportegasto.reportar_dias(reporte,d);
            cout << "Gastos en " << d << " dias: " << reportegasto.getreporteGasto_dias()<<endl;
            cout << "--------------------------------------" << endl;
            reportarGasto();
        }
        if (g_rp == 2)
        {
            int m;
            cout << "A cuantos meses a futuro quieres ver: " << endl;
            cin >> m;
            reportegasto.reportar_mes(reporte,m);
            cout << "Gastos en " << m << " meses: " << reportegasto.getreporteGasto_mes()<<endl;
            cout << "--------------------------------------" << endl;
            reportarGasto();
        }
        if (g_rp == 3)
        {
            int a;
            cout << "A cuantos años a futuro quieres ver: " << endl;
            cin >> a;
            reportegasto.reportar_anual(reporte,a);
            cout << "Gastos en " << a << " anos: " << reportegasto.getreporteGasto_anual()<<endl; 
            cout << "--------------------------------------" << endl;
            reportarGasto();
        }
        if (g_rp == 4)
        {
            cout << "Regresando al menu..." << endl;
            cout << "--------------------------------------" << endl;
            menu_rep();
        }
    } while (g_rp == 1 || g_rp == 2 || g_rp == 3 || g_rp == 4);
    if (g_rp != 1 && g_rp != 2 && g_rp != 3 && g_rp != 4)
    {
        cout << "Esa no es una opcion valida, escoge bien" << endl;
        cout << "--------------------------------------" << endl;
        reportarGasto();
    }
}

void reportarVenta()
{
    int v_rp;
    cout << "Que tipo de venta quieres hacer reporte: " << endl;
    cout << "1 - Venta diaria" << endl;
    cout << "2 - Venta mensual" << endl;
    cout << "3 - Venta anual" << endl;
    cout << "4 - Regresar" << endl;
    cin >> v_rp;
    do
    {
        if (v_rp == 1)
        {
            int d;
            cout << "A cuantos dias a futuro quieres ver: " << endl;
            cin >> d;
            reporteventa.reportar_dias(reporte,d);
            cout << "Ventas en " << d << " dias: " << reporteventa.getreporteVenta_dias() << endl;
            cout << "--------------------------------------" << endl;
            reportarVenta();
        }
        if (v_rp == 2)
        {
            int m;
            cout << "A cuantos meses a futuro quieres ver: " << endl;
            cin >> m;
            reporteventa.reportar_mes(reporte,m);
            cout << "Ventas en " << m << " meses: " << reporteventa.getreporteVenta_mes() << endl;
            cout << "--------------------------------------" << endl;
            reportarVenta();
        }
        if (v_rp == 3)
        {
            int a;
            cout << "A cuantos años a futuro quieres ver: " << endl;
            cin >> a;
            reporteventa.reportar_anual(reporte,a);
            cout << "Ventas en " << a << " años: " << reporteventa.getreporteVenta_anual() << endl;
            cout << "--------------------------------------" << endl;
            reportarVenta();
        }
        if (v_rp == 4)
        {
            cout << "Regresando al menu..." << endl;
            cout << "--------------------------------------" << endl;
            menu_rep();
        }
    } while (v_rp == 1 || v_rp == 2 || v_rp == 3 || v_rp == 4);
    if (v_rp != 1 && v_rp != 2 && v_rp != 3 && v_rp != 4)
    {
        cout << "Esa no es una opcion valida, escoge bien" << endl;
        cout << "--------------------------------------" << endl;
        reportarVenta();
    }
}

void agregar_inv()
{
    int op_ag;
    cout << ("Selecciona el inventario al que le quieres agregar") << endl;
    cout << ("1 - Frutas") << endl;
    cout << ("2 - Vegetales") << endl;
    cout << ("3 - Carnes") << endl;
    cout << ("4 - Electronicos") << endl;
    cin >> op_ag;
    cout << "--------------------------------------" << endl;
    do
    {
        if (op_ag == 1)
        {
            inventario.agregarFruta();
            cout << "--------------------------------------" << endl;
            menu_inv();
        }
        if (op_ag == 2)
        {
            inventario.agregarVegetal();
            cout << "--------------------------------------" << endl;
            menu_inv();
        }
        if (op_ag == 3)
        {
            inventario.agregarCarne();
            cout << "--------------------------------------" << endl;
            menu_inv();
        }
        if (op_ag == 4)
        {
            inventario.agregarElectro();
            cout << "--------------------------------------" << endl;
            menu_inv();
        }
    } while (op_ag == 1 || op_ag == 2 || op_ag == 3 || op_ag == 4);

    if (op_ag != 1 && op_ag != 2 && op_ag != 3 && op_ag != 4)
    {
        cout << "Esa no es una opcion valida, escoge bien" << endl;
        cout << "--------------------------------------" << endl;
        agregar_inv();
    }
}

void quitar_inv()
{
    int op_q;
    cout << ("Selecciona el inventario al que le quieres quitar") << endl;
    cout << ("1 - Frutas") << endl;
    cout << ("2 - Vegetales") << endl;
    cout << ("3 - Carnes") << endl;
    cout << ("4 - Electronicos") << endl;
    cin >> op_q;
    cout << "--------------------------------------" << endl;
    do
    {
        if (op_q == 1)
        {
            inventario.quitarFruta();
            cout << "--------------------------------------" << endl;
            menu_inv();
        }
        if (op_q == 2)
        {
            inventario.quitarVegetal();
            cout << "--------------------------------------" << endl;
            menu_inv();
        }
        if (op_q == 3)
        {
            inventario.quitarCarne();
            cout << "--------------------------------------" << endl;
            menu_inv();
        }
        if (op_q == 4)
        {
            inventario.quitarElectro();
            cout << "--------------------------------------" << endl;
            menu_inv();
        }
    } while (op_q == 1 || op_q == 2 || op_q == 3 || op_q == 4);

    if (op_q != 1 && op_q != 2 && op_q != 3 && op_q != 4)
    {
        cout << "Esa no es una opcion valida, escoge bien" << endl;
        cout << "--------------------------------------" << endl;
        quitar_inv();
    }
}

void menu_ventas()
{
    int op_v;
    cout << "Que tipo de ventas quieres registrar" << endl;
    cout << "1 - Venta diaria" << endl;
    cout << "2 - Venta mensual" << endl;
    cout << "3 - Venta anual" << endl;
    cout << "4 - Regresar" << endl;
    cin >> op_v;
    do
    {
        if (op_v == 1)
        {
            float v_d;
            cout << "Registra las ventas diarias: " << endl;
            cin >> v_d;
            venta.setVentas_dia(v_d);
            cout << "--------------------------------------" << endl;
            menu_ventas();
        }
        else if (op_v == 2)
        {
            float v_m;
            cout << "Registra las ventas mensuales: " << endl;
            cin >> v_m;
            venta.setVentas_mes(v_m);
            cout << "--------------------------------------" << endl;
            menu_ventas();
        }
        else if (op_v == 3)
        {
            float v_a;
            cout << "Registra las ventas anuales: " << endl;
            cin >> v_a;
            venta.setVentas_anual(v_a);
            cout << "--------------------------------------" << endl;
            menu_ventas();
        }
        else if (op_v == 4)
        {
            cout << "Regresando al menu..." << endl;
            cout << "--------------------------------------" << endl;
            reporteventa.agregar_venta(venta);
            menu();
        }
    } while (op_v == 1 || op_v == 2 || op_v == 3 || op_v == 4);
    if (op_v != 1 && op_v != 2 && op_v != 3 && op_v != 4)
    {
        cout << "Esa no es una opcion valida, escoge bien" << endl;
        cout << endl;
        menu_ventas();
    }
}

void menu_gastos()
{
    int op_g;
    cout << "Que tipo de gasto quieres registrar" << endl;
    cout << "1 - Gasto diario" << endl;
    cout << "2 - Gasto mensual" << endl;
    cout << "3 - Gasto anual" << endl;
    cout << "4 - Regresar" << endl;
    cin >> op_g;
    do
    {
        if (op_g == 1)
        {
            float g_d;
            cout << "Registra los gastos diarios: " << endl;
            cin >> g_d;
            gasto.setGastos_dia(g_d);
            cout << "--------------------------------------" << endl;
            menu_gastos();
        }
        if (op_g == 2)
        {
            float g_m;
            cout << "Registra los gastos mensuales: " << endl;
            cin >> g_m;
            gasto.setGastos_mes(g_m);
            cout << "--------------------------------------" << endl;
            menu_gastos();
        }
        if (op_g == 3)
        {
            float g_a;
            cout << "Registra los gastos anuales: " << endl;
            cin >> g_a;
            gasto.setGastos_anual(g_a);
            cout << "--------------------------------------" << endl;
            menu_gastos();
        }
        if (op_g == 4)
        {
            cout << "Regresando al menu..." << endl;
            cout << "--------------------------------------" << endl;
            reportegasto.agregar_gasto(gasto);
            menu();

        }
    } while (op_g == 1 || op_g == 2 || op_g == 3 || op_g == 4);
    if (op_g != 1 && op_g != 2 && op_g != 3 && op_g != 4)
    {
        cout << "Esa no es una opcion valida, escoge bien" << endl;
        cout << "--------------------------------------" << endl;
        menu_gastos();
    }
}

void menu_pagos()
{
    int op_p;
    cout << "Que tipo de pago quieres registrar" << endl;
    cout << "1 - Pago empleados" << endl;
    cout << "2 - Pago luz" << endl;
    cout << "3 - Pago agua" << endl;
    cout << "4 - Regresar" << endl;
    cin >> op_p;
    do
    {
        if (op_p == 1)
        {
            float p_e;
            cout << "Registra los pagos a empleados (por semana): " << endl;
            cin >> p_e;
            pago.setPagos_empleado(p_e);
            cout << "--------------------------------------" << endl;
            menu_pagos();
        }
        if (op_p == 2)
        {
            float p_l;
            cout << "Registra los pagos de luz (por semana): " << endl;
            cin >> p_l;
            pago.setPagos_luz(p_l);
            cout << "--------------------------------------" << endl;
            menu_pagos();
        }
        if (op_p == 3)
        {
            float p_a;
            cout << "Registra los pagos de agua (por semana): " << endl;
            cin >> p_a;
            pago.setPagos_agua(p_a);
            cout << "--------------------------------------" << endl;
            menu_pagos();
        }
        if (op_p == 4)
        {
            cout << "Regresando al menu..." << endl;
            cout << "--------------------------------------" << endl;
            reportepago.agregar_pago(pago);
            menu();
        }
    } while (op_p == 1 || op_p == 2 || op_p == 3 || op_p == 4);
    if (op_p != 1 && op_p != 2 && op_p != 3 && op_p != 4)
    {
        cout << "Esa no es una opcion valida, escoge bien" << endl;
        cout << "--------------------------------------" << endl;
        menu_pagos();
    }
}

void menu_inv()
{
    int op_inv;
    cout<<("Selecciona que deseas hacer") << endl;
    cout << ("1 - Agregar") << endl;
    cout << ("2 - Quitar") << endl;
    cout << ("3 - Regresar") << endl;
    cin >> op_inv;
    do
    {
        if (op_inv == 1)
        {
            agregar_inv();
            cout << "--------------------------------------" << endl;
            menu_inv();
        }
        if (op_inv == 2)
        {
            quitar_inv();
            cout << "--------------------------------------" << endl;
            menu_inv();
        }
        if (op_inv == 3)
        {
            cout << "Regresando al menu..." << endl;
            cout << "--------------------------------------" << endl;
            menu();
        }
    } while (op_inv == 1 || op_inv == 2 || op_inv == 3);
    if (op_inv != 1 && op_inv != 2 && op_inv != 3)
    {
        cout << "Esa no es una opcion valida, escoge bien" << endl;
        cout << "--------------------------------------" << endl;
        menu_inv();
    }
}

void menu_rep()
{
    int op_rep;
    cout << ("Selecciona el reporte que deseas generar") << endl;
    cout << ("1 - Reporte Ventas") << endl;
    cout << ("2 - Reporte Gastos") << endl;
    cout << ("3 - Reporte Pagos") << endl;
    cout << ("4 - Reporte Inventario") << endl;
    cout << ("5 - Reporte General") << endl;
    cout << ("6 - Regresar") << endl;
    cin >> op_rep;
    do
    {
        if (op_rep == 1)
        {
            
            reportarVenta();
            cout << "--------------------------------------" << endl;
        }
        if (op_rep == 2)
        {
            reportarGasto();
            cout << "--------------------------------------" << endl;
        }
        if (op_rep == 3)
        {
            reportarPago();
            cout << "--------------------------------------" << endl;
        }
        if (op_rep == 4)
        {
            reportarInv();
            cout << "--------------------------------------" << endl;
        }
        if (op_rep == 5)
        {
            reportarGen();
            cout << "--------------------------------------" << endl;
        }
        if (op_rep == 6)
        {
            cout << "Regresando al menu..." << endl;
            cout << "--------------------------------------" << endl;
            menu();
        }
    } while (op_rep == 1 || op_rep == 2 || op_rep == 3 || op_rep == 4 || op_rep == 5 || op_rep == 6);
    if (op_rep != 1 && op_rep != 2 && op_rep != 3 && op_rep != 4 && op_rep != 5 && op_rep!=6)
    {
        cout << "Esa no es una opcion valida, escoge bien" << endl;
        cout << "--------------------------------------" << endl;
        menu_rep();
    }
}

void menu()
{
    int opc;
    cout << ("Selecciona que deseas hacer") << endl;
    cout << ("1 - Registrar ventas") << endl;
    cout << ("2 - Registrar gastos") << endl;
    cout << ("3 - Registrar inventario") << endl;
    cout << ("4 - Registrar pagos") << endl;
    cout << ("5 - Generar reporte") << endl;
    cout << ("6 - Salir") << endl;
    cin >> opc;
    do
    {
        if (opc == 1)
        {
            cout << "--------------------------------------" << endl;
            menu_ventas();
        }
        if (opc == 2)
        {
            cout << "--------------------------------------" << endl;
            menu_gastos();
        }
        if (opc == 3)
        {
            cout << "--------------------------------------" << endl;
            menu_inv();
        }
        if (opc == 4)
        {
            cout << "--------------------------------------" << endl;
            menu_pagos();
        }
        if (opc == 5)
        {
            cout << "--------------------------------------" << endl;
            menu_rep();
        }
        if (opc == 6)
        {
            break;
        }
    } while (opc == 1 || opc == 2 || opc == 3 || opc == 4 || opc == 5 || opc == 6);
    if (opc != 1 && opc != 2 && opc != 3 && opc != 4 && opc != 5 && opc != 6)
    {
        cout << "Esa no es una opcion valida, escoge bien" << endl;
        cout << "--------------------------------------" << endl;
        menu();
    }
}

int main()
{
    menu();
    return 0;
}
