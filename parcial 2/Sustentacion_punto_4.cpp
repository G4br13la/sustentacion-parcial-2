#include <iostream>
#include <string>
#include <list>

using namespace std;

// agregar en una lista dependiendo de la calificacion

class ejecucion
{
private:
    list<string> mas_jugados;
    list<string> menos_jugados;

public:
//sets y gets
    void mas_jugados(list<string> j)
    {
        this->mas_jugados = j;
    }
    list<string> mas_jugados()
    {
        return mas_jugados;
    }

    voidoid menos_jugados(list<string> x)
    {
        this->menos_jugados = x;
    }
    list<string> menos_jugados()
    {
        return menos_jugados;
    }

    // void agregarjurgo(list<string> videojuego)
    // {

    // }

//funciones
    void juegos_fab()
    {

        int mario = 0;
        int triqui = 0;
        int piedra_papel_tijera = 0;
        int picas_ficas = 0;

        cout << "1.Los juegos son: " << endl;
        cout << " " << endl;
        cout << "a. Mario " << endl;
        cout << "b. Triqui " << endl;
        cout << "c. piedra papel y tijera " << endl;
        cout << "d. Picas y fijas " << endl;
        cout << " " << endl;
        cout << "cual es tu juego favorito: " << endl;
        cout << "2. Juegos mas jugados " << endl;
        cout << "2. Juegos menos jugados " << endl;

        int opcion;
        cin >> opcion;
        switch (opcion)
        {
        case 1: // a medida que escojan ese juego su punyaje va subiendo, si  el punbtaje es mayor a 3, meter a mas jugados si no, meter a menos juigados
            mario++;
            if (mario >= 3)
            {
                mario.pushback(mas_jugados);
            }
            else
            {
                mario.pushback(menos_jugados);
            }
            break;
        case 2:
            triqui++;
            if (triqui >= 3)
            {
                triqui.pushback(mas_jugados);
            }
            else
            {
                triqui.pushback(menos_jugados);
            }

            break;
        case 3:
            piedra_papel_tijera++;
            if (piedra_papel_tijera >= 3)
            {
                piedra_papel_tijera.pushback(mas_jugados);
            }
            else
            {
                piedra_papel_tijera.pushback(menos_jugados);
            }

            break;
        case 4:
            picas_ficas++;
            if (picas_ficas >= 3)
            {
                picas_ficas.pushback(mas_jugados);
            }
            else
            {
                picas_ficas.pushback(menos_jugados);
            }
            break;

        case 5:
            cout << "los juegos mas jugados son: " << endl;

        default:
            break;
        }
    }
};

int main()
{
    ejecucion juego;

    juego.juegos_fab();
}
