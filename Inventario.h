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


void Inventario::printFruta()
{
    for (int x = 0; x < tamFruta; x++)
    {
        cout << "Index: " << x << endl;
        cout << " Productos: " << invFruta[x] << endl;
    };
};

void Inventario::printVegetal()
{
    for (int x = 0; x < tamVegetal; x++)
    {
        cout << "Index: " << x << endl;
        cout << " Productos: " << invVegetal[x] << endl;
    };
};

void Inventario::printCarne()
{
    for (int x = 0; x < tamCarne; x++)
    {
        cout << "Index: " << x << endl;
        cout << " Productos: " << invCarne[x] << endl;
    };
};

void Inventario::printElectro()
{
    for (int x = 0; x < tamElectro; x++)
    {
        cout << "Index: " << x << endl;
        cout << " Productos: " << invElectro[x] << endl;
    };
};

void Inventario::setTamFruta(int tam)
{
    tamFruta = tam;
}
void Inventario::setTamVegetal(int tam)
{
    tamVegetal = tam;
}
void Inventario::setTamCarne(int tam)
{
    tamCarne = tam;
}
void Inventario::setTamElectro(int tam)
{
    tamElectro = tam;
}

int Inventario::getTamFruta()
{
    return tamFruta;
}

int Inventario::getTamVegetal()
{
    return tamVegetal;
}

int Inventario::getTamCarne()
{
    return tamCarne;
}

int Inventario::getTamElectro()
{
    return tamElectro;
}

void Inventario::agregarFruta()
{
    string Fruta;
    int nuevaFruta;
    do
    {
        cout << "Que fruta quieres agregar a la lista: ";
        cin >> Fruta;
        invFruta[getTamFruta()] = Fruta;
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
} 

void Inventario::quitarFruta()
{
    int numQuitar;
    printFruta();
    cout << endl;
    cout << "Que fruta quieres quitar de la lista,escoge su numero: ";
    cin >> numQuitar;
    invFruta[numQuitar] = {};
    int tam = getTamFruta() - 1;
    setTamFruta(tam);
    cout << "--------------------------------------" << endl;
}

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
}

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
}

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
}

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
}

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
}

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
}

