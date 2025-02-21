#include <string>
#include <iostream>

using namespace std;

class Videojuegos {
private:
    string nombre;
    string genero;
    int lanzamiento;
    float precio;

public:
//Constructor
    Videojuegos(string n, string g, int l, float p) :
        nombre(n), genero(g), lanzamiento(l), precio(p) {}

//Metodos
    virtual void mostrarInfo() {
        cout << endl <<
            "Nombre: " << nombre << endl <<
            "Genero: " << genero << endl <<
            "Lanzamiento: " << lanzamiento << endl <<
            "Precio: Q" << precio << endl;

    }

    string getNombre() {
        return nombre;
    }

};

class VjMovil : public Videojuegos{
private:
    string sistemaOperativo;

public:
 //Constructor

    VjMovil(string n, string g, int l, float p, string so) :
        Videojuegos(n, g, l, p), sistemaOperativo(so) {}

//Metodos

    void mostrarInfo() override {
            Videojuegos::mostrarInfo();
            cout <<
                "Sistema operativo: " << sistemaOperativo<<endl;

    }
};


int main()
{
    VjMovil vm1("Angry Birds", "Estrategia", 2012, 0, "IOS y Android");

    vm1.mostrarInfo();
    
    return 0;
}
