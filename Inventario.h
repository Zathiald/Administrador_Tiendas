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
    void settam_f(int);
    void settam_v(int);
    void settam_c(int);
    void settam_e(int);
    void printfruta();
    void printvegetal();
    void printcarne();
    void printelectro();
    int gettam_f();
    int gettam_v();
    int gettam_c();
    int gettam_e();
    
private:
    int tam_f = 0;
    int tam_v = 0;
    int tam_c = 0;
    int tam_e = 0;
    string inv_Fruta[50];
    string inv_Vegetal[50];
    string inv_Carne[50];
    string inv_Electro[50];
};


void Inventario::printfruta()
{
    for (int x = 0; x < tam_f; x++)
    {
        cout << "Index: " << x << endl;
        cout << " Productos: " << inv_Fruta[x] << endl;
    };
};

void Inventario::printvegetal()
{
    for (int x = 0; x < tam_v; x++)
    {
        cout << "Index: " << x << endl;
        cout << " Productos: " << inv_Vegetal[x] << endl;
    };
};

void Inventario::printcarne()
{
    for (int x = 0; x < tam_c; x++)
    {
        cout << "Index: " << x << endl;
        cout << " Productos: " << inv_Carne[x] << endl;
    };
};

void Inventario::printelectro()
{
    for (int x = 0; x < tam_e; x++)
    {
        cout << "Index: " << x << endl;
        cout << " Productos: " << inv_Electro[x] << endl;
    };
};



void Inventario::settam_f(int t)
{
    tam_f = t;
}
void Inventario::settam_v(int t)
{
    tam_v = t;
}
void Inventario::settam_c(int t)
{
    tam_c = t;
}
void Inventario::settam_e(int t)
{
    tam_e = t;
}

int Inventario::gettam_f()
{
    return tam_f;
}

int Inventario::gettam_v()
{
    return tam_v;
}

int Inventario::gettam_c()
{
    return tam_c;
}

int Inventario::gettam_e()
{
    return tam_e;
}

void Inventario::agregarFruta()
{
    string fruta;
    int nueva_fruta;
    do
    {
        cout << "Que fruta quieres agregar a la lista: ";
        cin >> fruta;
        inv_Fruta[gettam_f()] = fruta;
        int t = gettam_f() + 1;
        settam_f(t);
        cout << "Quieres agregar otra fruta?" << endl;
        cout << "1 - Si" << endl;
        cout << "2 - No" << endl;
        cin >> nueva_fruta;
        if (nueva_fruta == 2)
        {
            cout << "--------------------------------------" << endl;
        }
    } while (nueva_fruta == 1);
} 

void Inventario::quitarFruta()
{
    int fruta_x;
    cout << endl;
    cout << "Que fruta quieres quitar de la lista,escoge su numero: ";
    cin >> fruta_x;
    inv_Fruta[fruta_x] = {};
    int t = gettam_f() - 1;
    settam_f(t);
    cout << "--------------------------------------" << endl;
}

void Inventario::agregarVegetal()
{
    string vegetal;
    int nuevo_vegetal;
    do
    {
        cout << "Que vegetal quieres agregar a la lista: ";
        cin >> vegetal;
        inv_Vegetal[gettam_v()] = vegetal;
        int t = gettam_v() + 1;
        settam_v(t);
        cout << "Quieres agregar otro vegetal?" << endl;
        cout << "1 - Si" << endl;
        cout << "2 - No" << endl;
        cin >> nuevo_vegetal;
        if (nuevo_vegetal == 2)
        {
            cout << "--------------------------------------" << endl;
        }
    } while (nuevo_vegetal == 1);
}

void Inventario::quitarVegetal()
{
    int vegetal_x;
    cout << endl;
    cout << "Que vegetal quieres quitar de la lista,escoge su numero: ";
    cin >> vegetal_x;
    inv_Vegetal[vegetal_x] = {};
    int t = gettam_v() - 1;
    settam_v(t);
    cout << "--------------------------------------" << endl;
}

void Inventario::agregarCarne()
{
    string carne;
    int nuevo_carne;
    do
    {
        cout << "Que carne quieres agregar a la lista: ";
        cin >> carne;
        inv_Carne[gettam_c()] = carne;
        int t = gettam_c() + 1;
        settam_c(t);
        cout << "Quieres agregar otra carne?" << endl;
        cout << "1 - Si" << endl;
        cout << "2 - No" << endl;
        cin >> nuevo_carne;
        if (nuevo_carne == 2)
        {
            cout << "--------------------------------------" << endl;
        }
    } while (nuevo_carne == 1);
}

void Inventario::quitarCarne()
{
    int carne_x;
    cout << endl;
    cout << "Que carne quieres quitar de la lista,escoge su numero: ";
    cin >> carne_x;
    inv_Carne[carne_x] = {};
    int t = gettam_c() - 1;
    settam_c(t);
    cout << "--------------------------------------" << endl;
}

void Inventario::agregarElectro()
{
    string electro;
    int nuevo_electro;
    do
    {
        cout << "Que electronico quieres agregar a la lista: ";
        cin >> electro;
        inv_Electro[gettam_e()] = electro;
        int t = gettam_e() + 1;
        settam_e(t);
        cout << "Quieres agregar otro electronico?" << endl;
        cout << "1 - Si" << endl;
        cout << "2 - No" << endl;
        cin >> nuevo_electro;
        if (nuevo_electro == 2)
        {
            cout << "--------------------------------------" << endl;
        }
    } while (nuevo_electro == 1);
}

void Inventario::quitarElectro()
{
    int electro_x;
    cout << endl;
    cout << "Que electronico quieres quitar de la lista,escoge su numero: ";
    cin >> electro_x;
    inv_Electro[electro_x] = {};
    int t = gettam_e() - 1;
    settam_e(t);
    cout << "--------------------------------------" << endl;
}

