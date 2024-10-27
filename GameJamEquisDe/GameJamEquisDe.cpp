#include "pch.h";
#include "MisFunciones.h"

void showIntro() {


    cout << "\n\n\n\n\n\n\t\t\t\t  ____  _                           _     _        \n";
    cout << "\t\t\t\t | __ )(_) ___ _ ____   _____ _ __ (_) __| | ___   \n";
    cout << "\t\t\t\t |  _ L| |/ _ L '_ Y L / / _ L '_ L| |/ _` |/ _ L  \n";
    cout << "\t\t\t\t | |_) | |  __/ | | Y V /  __/ | | | | (_| | (_) | \n";
    cout << "\t\t\t\t |____/|_|Y___|_| |_|Y_/ L___|_| |_|_|L__,_|L___/  ";


    cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t ";
    char x = 219;
    for (int i = 0; i <= 40; i++) {
        Sleep(100);
        cout << x;
    }
}
int mostrarmenu() {
    int elegir;


    cout << "1. Jugar\n";
    cout << "2. Creditos\n";
    cout << "3. Salir\n\n";
    cout << "Seleccione opcion: ";

    do {
        cin >> elegir;

    } while (elegir < 1 || elegir > 3);
    return elegir;
}

void IniciarCarrera() {
    int cuenta_carreras = 1;
    bool hay_ganador = false;
    int carreras_c1 = 0, carreras_c2 = 0;
    const int Meta = 150;
         titulo(28, 1);     meta(Meta, 3);
    //coordenadas de los caracteres
    float x1, y1, dx1;
    float x2, y2, dx2;

    x1 = x2 = 1;
    y1 = 10;
    y2 = 20;
    dx1 = aleatorio_decimal();
    dx2 = aleatorio_decimal();

    cursor(x1, y1); cout << "@";
    cursor(x2, y2); cout << "O";

    while (1) {

        panel_control(dx1, dx2, x1, x2, carreras_c1, carreras_c2);

        cursor(35, 5); cout << "CARRERA " << cuenta_carreras;
        //borrar
        borra_auto(x1, y1);

        borraauto2(x2, y2);
        //mover
        x1 += dx1;
        x2 += dx2;
        //dibujar
        dibuja_auto(x1, y1);

        dibujarauto2(x2, y2);

        //verifica quien gana 
        if (x1 > Meta - 9) {
            cursor(30, 35); cout << "GANA CARACTER 1";
            system("pause>0");
            hay_ganador = true;
            carreras_c1++;
        }

        if (x2 > Meta -8) {
            cursor(30, 35); cout << "GANA CARACTER 2";
            system("pause>0");
            hay_ganador = true;
            carreras_c2++;
        }

        if (hay_ganador) {
            //reinicia una nueva carrera
            Console::Clear();
            titulo(28, 1);     meta(Meta, 3);
            x1 = x2 = 1;
            dx1 = aleatorio_decimal();
            dx2 = aleatorio_decimal();
            cuenta_carreras++;
            hay_ganador = false;
        }


        _sleep(30);
    }
}

void opcionesdemenu() {
    int escoger = 0;
    showIntro();

    system("cls");

    while (1) {
        system("cls");
        escoger = mostrarmenu();
        system("cls");

        switch (escoger) {
        case 1:
            IniciarCarrera();
            system("cls");
            break;
        case 2:
            cout << "Frank Flores\n\n";
            cout << "Cielo Atencio\n\n";
            cout << "Victor Hidago\n\n";

            cout << "Presione cualquier tecla para continuar...\n\n";
            system("pause > 0");
            Console::ReadKey();
            break;

        case 3:
            exit(0);
        }
    }
}

void dibujarCarro() {
	cout << "   __" << endl;
	cout << " _|__|__" << endl;
	cout << "'-O---O-'" << endl;

}

int main()
{
    srand(time(nullptr));

  

    ConfigurarVentana();
    opcionesdemenu();


    system("pause>0");
    return 0;
}
