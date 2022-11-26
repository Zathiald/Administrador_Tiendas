//Creación de la clase de Inventario, usado crear todas las funciones y variables necesarias para el registro y alteración de inventario
//Creación: 17/11/22
#include <iostream>
#include <list>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Inventario
{
public:
    void agregarFruta();
    void quitarFruta();
    void agregarVegetal();
    void quitarVegetal();
    void agregarCarne();
    void quitarCarne();
    void agregarElectro();
    void quitarElectro();
    void setTamFruta(int);
    void setTamVegetal(int);
    void setTamCarne(int);
    void setTamElectro(int);
    void printFruta();
    void printVegetal();
    void printCarne();
    void printElectro();
    int getTamFruta();
    int getTamVegetal();
    int getTamCarne();
    int getTamElectro();
    
private:
    int tamFruta = 0;
    int tamVegetal= 0;
    int tamCarne = 0;
    int tamElectro = 0;
    string invFruta[50];
    string invVegetal[50];
    string invCarne[50];
    string invElectro[50];
};

//Funcion:Se analiza cada elemento en la lista de inventario de fruta, para imprimir cada elemento junto con su numero de index
//Parametros: No se tienen parametros para esta función, pero si se utiliza la variable de inventario de fruta
//Retorno: Se regresa una lista de cada valor de el inventario de fruta junto con su index
void Inventario::printFruta()
{
    for (int x = 0; x < tamFruta; x++)
    {
        cout << "Index: " << x << endl;
        cout << " Productos: " << invFruta[x] << endl;
    };
};

//Funcion:Se analiza cada elemento en la lista de inventario de vegetales, para imprimir cada elemento junto con su numero de index
//Parametros: No se tienen parametros para esta función, pero si se utiliza la variable de inventario de vegetales
//Retorno: Se regresa una lista de cada valor de el inventario de vegetales junto con su index
void Inventario::printVegetal()
{
    for (int x = 0; x < tamVegetal; x++)
    {
        cout << "Index: " << x << endl;
        cout << " Productos: " << invVegetal[x] << endl;
    };
};

//Funcion:Se analiza cada elemento en la lista de inventario de carne, para imprimir cada elemento junto con su numero de index
//Parametros: No se tienen parametros para esta función, pero si se utiliza la variable de inventario de carne
//Retorno: Se regresa una lista de cada valor de el inventario de carne junto con su index
void Inventario::printCarne()
{
    for (int x = 0; x < tamCarne; x++)
    {
        cout << "Index: " << x << endl;
        cout << " Productos: " << invCarne[x] << endl;
    };
};

//Funcion:Se analiza cada elemento en la lista de inventario de electronicos, para imprimir cada elemento junto con su numero de index
//Parametros: No se tienen parametros para esta función, pero si se utiliza la variable de inventario de electronicos
//Retorno: Se regresa una lista de cada valor de el inventario de electronicos junto con su index
void Inventario::printElectro()
{
    for (int x = 0; x < tamElectro; x++)
    {
        cout << "Index: " << x << endl;
        cout << " Productos: " << invElectro[x] << endl;
    };
};

//Funcion:Darle nuevo valor a la variable de tamaño de la lista de frutas
//Parametros: Se toma un parametro de float para darle ese valor a la variable de tamaño de la lista de frutas
//Retorno: Al ser una función void no se tiene un retorno en sí,solo se actualiza el valor de la variable
void Inventario::setTamFruta(int tam)
{
    tamFruta = tam;
};

//Funcion:Darle nuevo valor a la variable de tamaño de la lista de vegetales
//Parametros: Se toma un parametro de float para darle ese valor a la variable de tamaño de la lista de vegetales
//Retorno: Al ser una función void no se tiene un retorno en sí,solo se actualiza el valor de la variable
void Inventario::setTamVegetal(int tam)
{
    tamVegetal = tam;
};

//Funcion:Darle nuevo valor a la variable de tamaño de la lista de carne
//Parametros: Se toma un parametro de float para darle ese valor a la variable de tamaño de la lista de carne
//Retorno: Al ser una función void no se tiene un retorno en sí,solo se actualiza el valor de la variable
void Inventario::setTamCarne(int tam)
{
    tamCarne = tam;
};

//Funcion:Darle nuevo valor a la variable de tamaño de la lista de electronicos
//Parametros: Se toma un parametro de float para darle ese valor a la variable de tamaño de la lista de electronicos
//Retorno: Al ser una función void no se tiene un retorno en sí,solo se actualiza el valor de la variable
void Inventario::setTamElectro(int tam)
{
    tamElectro = tam;
};

//Funcion:Regresar el valor de la variable de tamaño de la lista de frutas
//Parametros: Al ser un getter no se obtienen parametros, solo se regresa un valor
//Retorno: Se regresa el valor de la variable de tamaño de la lista de frutas
int Inventario::getTamFruta()
{
    return tamFruta;
};

//Funcion:Regresar el valor de la variable de tamaño de la lista de vegetales
//Parametros: Al ser un getter no se obtienen parametros, solo se regresa un valor
//Retorno: Se regresa el valor de la variable de tamaño de la lista de vegetales
int Inventario::getTamVegetal()
{
    return tamVegetal;
};

//Funcion:Regresar el valor de la variable de tamaño de la lista de carne
//Parametros: Al ser un getter no se obtienen parametros, solo se regresa un valor
//Retorno: Se regresa el valor de la variable de tamaño de la lista de carne
int Inventario::getTamCarne()
{
    return tamCarne;
};

//Funcion:Regresar el valor de la variable de tamaño de la lista de electronicos
//Parametros: Al ser un getter no se obtienen parametros, solo se regresa un valor
//Retorno: Se regresa el valor de la variable de tamaño de la lista de electronicos
int Inventario::getTamElectro()
{
    return tamElectro;
};

//Funcion:Se le pide al usuario la nueva fruta que se va a ingresar y se añade la lista a el inventario de frutas-
// aumentando también la variable de tamaño de la lista de frutas, después se le pregunta al usuario si quiere ingresar otra fruta, y si dice que si, se llama de nuevo la función
//Parametros: No se tienen parametros para esta función, pero si se utiliza la variable de inventario de fruta y se hacen variables de fruta a ingresar y opcion para poner otra fruta
//Retorno: Al ser un void no se regresa ningún valor, pero si se actualiza el inventario de frutas
void Inventario::agregarFruta()
{
    string fruta;
    int nuevaFruta;
    do
    {
        cout << "Que fruta quieres agregar a la lista: ";
        cin >> fruta;
        invFruta[getTamFruta()] = fruta;
        int tam = getTamFruta() + 1;
        setTamFruta(tam);
        cout << "Quieres agregar otra fruta?" << endl;
        cout << "1 - Si" << endl;
        cout << "2 - No" << endl;
        cin >> nuevaFruta;
        if (nuevaFruta == 2)
        {
            cout << "--------------------------------------" << endl;
        }
    } while (nuevaFruta == 1);
};

//Funcíon: Se le pide al usuario que número de index quiere quitar de la lista, después se quita ese elemento de la lista y se baja el index de la lista a uno menos
//Parametros: No hay parametros en si para esta función, pero si se utiliza un integer para saber que número de index eliminar y se altera el inventario de fruta y su tamaño
//Retorno: Al ser un void no hay return explicito, pero si se regresa un inventario de fruta y tamaño alterado
void Inventario::quitarFruta()
{
    int numQuitar;
    printFruta();
    cout << endl;
    cout << "Que vegetal quieres quitar de la lista,escoge su numero: ";
    cin >> numQuitar;
    invFruta[numQuitar] = {};
    int t = getTamFruta() - 1;
    setTamFruta(t);
    cout << "--------------------------------------" << endl;
};

//Funcion:Se le pide al usuario la nueva fruta que se va a ingresar y se añade la lista a el inventario de vegetales-
// aumentando también la variable de tamaño de la lista de vegetales, después se le pregunta al usuario si quiere ingresar otro vegetal, y si dice que si, se llama de nuevo la función
//Parametros: No se tienen parametros para esta función, pero si se utiliza la variable de inventario de vegetal y se hacen variables de vegetal a ingresar y opcion para poner otro vegetal
//Retorno: Al ser un void no se regresa ningún valor, pero si se actualiza el inventario de vegetales
void Inventario::agregarVegetal()
{
    string Vegetal;
    int nuevoVegetal;
    do
    {
        cout << "Que vegetal quieres agregar a la lista: ";
        cin >> Vegetal;
        invVegetal[getTamVegetal()] = Vegetal;
        int tam = getTamVegetal() + 1;
        setTamVegetal(tam);
        cout << "Quieres agregar otro vegetal?" << endl;
        cout << "1 - Si" << endl;
        cout << "2 - No" << endl;
        cin >> nuevoVegetal;
        if (nuevoVegetal == 2)
        {
            cout << "--------------------------------------" << endl;
        }
    } while (nuevoVegetal == 1);
};

//Funcíon: Se le pide al usuario que número de index quiere quitar de la lista, después se quita ese elemento de la lista y se baja el index de la lista a uno menos
//Parametros: No hay parametros en si para esta función, pero si se utiliza un integer para saber que número de index eliminar y se altera el inventario de vegetales y su tamaño
//Retorno: Al ser un void no hay return explicito, pero si se regresa un inventario de vegetales y tamaño alterado
void Inventario::quitarVegetal()
{
    int numQuitar;
    printVegetal();
    cout << endl;
    cout << "Que vegetal quieres quitar de la lista,escoge su numero: ";
    cin >> numQuitar;
    invVegetal[numQuitar] = {};
    int t = getTamVegetal() - 1;
    setTamVegetal(t);
    cout << "--------------------------------------" << endl;
};

//Funcion:Se le pide al usuario la nueva fruta que se va a ingresar y se añade la lista a el inventario de carne-
// aumentando también la variable de tamaño de la lista de carne, después se le pregunta al usuario si quiere ingresar otra carne, y si dice que si, se llama de nuevo la función
//Parametros: No se tienen parametros para esta función, pero si se utiliza la variable de inventario de carne y se hacen variables de carne a ingresar y opcion para poner otra carne
//Retorno: Al ser un void no se regresa ningún valor, pero si se actualiza el inventario de carne
void Inventario::agregarCarne()
{
    string Carne;
    int nuevoCarne;
    do
    {
        cout << "Que carne quieres agregar a la lista: ";
        cin >> Carne;
        invCarne[getTamCarne()] = Carne;
        int tam = getTamCarne() + 1;
        setTamCarne(tam);
        cout << "Quieres agregar otra carne?" << endl;
        cout << "1 - Si" << endl;
        cout << "2 - No" << endl;
        cin >> nuevoCarne;
        if (nuevoCarne == 2)
        {
            cout << "--------------------------------------" << endl;
        }
    } while (nuevoCarne == 1);
};

//Funcíon: Se le pide al usuario que número de index quiere quitar de la lista, después se quita ese elemento de la lista y se baja el index de la lista a uno menos
//Parametros: No hay parametros en si para esta función, pero si se utiliza un integer para saber que número de index eliminar y se altera el inventario de carne y su tamaño
//Retorno: Al ser un void no hay return explicito, pero si se regresa un inventario de carne y tamaño alterado
void Inventario::quitarCarne()
{
    int numQuitar;
    printCarne();
    cout << endl;
    cout << "Que carne quieres quitar de la lista,escoge su numero: ";
    cin >> numQuitar;
    invCarne[numQuitar] = {};
    int tam = getTamCarne() - 1;
    setTamCarne(tam);
    cout << "--------------------------------------" << endl;
};


//Funcion:Se le pide al usuario la nueva fruta que se va a ingresar y se añade la lista a el inventario de electronicos-
// aumentando también la variable de tamaño de la lista de electronicos, después se le pregunta al usuario si quiere ingresar otro electronico, y si dice que si, se llama de nuevo la función
//Parametros: No se tienen parametros para esta función, pero si se utiliza la variable de inventario de electronicos y se hacen variables de electronicos a ingresar y opcion para poner otro electronico
//Retorno: Al ser un void no se regresa ningún valor, pero si se actualiza el inventario de electronicos
void Inventario::agregarElectro()
{
    string Electro;
    int nuevoElectro;
    do
    {
        cout << "Que electronico quieres agregar a la lista: ";
        cin >> Electro;
        invElectro[getTamElectro()] = Electro;
        int tam = getTamElectro() + 1;
        setTamElectro(tam);
        cout << "Quieres agregar otro electronico?" << endl;
        cout << "1 - Si" << endl;
        cout << "2 - No" << endl;
        cin >> nuevoElectro;
        if (nuevoElectro == 2)
        {
            cout << "--------------------------------------" << endl;
        }
    } while (nuevoElectro == 1);
};

//Funcíon: Se le pide al usuario que número de index quiere quitar de la lista, después se quita ese elemento de la lista y se baja el index de la lista a uno menos
//Parametros: No hay parametros en si para esta función, pero si se utiliza un integer para saber que número de index eliminar y se altera el inventario de electronicos y su tamaño
//Retorno: Al ser un void no hay return explicito, pero si se regresa un inventario de electronicos y tamaño alterado
void Inventario::quitarElectro()
{
    int numQuitar;
    printElectro();
    cout << endl;
    cout << "Que electronico quieres quitar de la lista,escoge su numero: ";
    cin >> numQuitar;
    invElectro[numQuitar] = {};
    int tam = getTamElectro() - 1;
    setTamElectro(tam);
    cout << "--------------------------------------" << endl;
};

