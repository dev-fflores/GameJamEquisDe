#include "iostream"
using namespace System;
using namespace std;

const int HEIGHT = 200;
const int WIDTH = 50;

void ConfigurarVentana() {
    Console::SetWindowSize(HEIGHT, WIDTH);
    Console::CursorVisible = false;
}

void cursor(int x, int y) {
    Console::SetCursorPosition(x, y);
}

void titulo(int x, int y) {
    cursor(x, y);
    cout << " CARRERA DE CARACTERES ";
}

void meta(int x, int y) {

    for (int y = 0; y < 50; ++y) {
        for (int x = 0; x < 140; ++x) {
            if ((x == 3 || x == 136) && y > 2 && y < 47) {
                cout << "|";
            }
            else if ((y == 2 || y == 47) && x > 3 && x < 136) {
                cout << "-";
            }
            else if ((x == 11 || x == 128) && y > 6 && y < 43) {
                cout << "|";
            }
            else if ((y == 6 || y == 43) && x > 11 && x < 128) {
                cout << "-";
            }
            else if ((x == 19 || x == 120) && y > 10 && y < 39) {
                cout << "|";
            }
            else if ((y == 10 || y == 39) && x > 19 && x < 120) {
                cout << "-";
            }
            else if ((x == 27 || x == 112) && y > 14 && y < 35) {
                cout << "|";
            }
            else if ((y == 14 || y == 35) && x > 27 && x < 112) {
                cout << "-";
            }
            else if ((x == 35 || x == 104) && y > 18 && y < 31) {
                cout << "|";
            }
            else if ((y == 18 || y == 31) && x > 35 && x < 104) {
                cout << "-";
            }
            else if (y == 47 && x < 40) {
                cout << (x % 2 == 0 ? "#" : " ");
            }
            else if (y == 1 && x < 40) {
                cout << (x % 2 == 0 ? "#" : " ");
            }
            else if (y == 46 && x == 50) {
                cout << "PARTIDA";
                x += 6;
            }
            else if (y == 2 && x == 50) {
                cout << "META";
                x += 3;
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

float aleatorio_decimal() {
    return  0.1 + ((float)(rand() % 60) / 80);
}

void panel_control(float vc1, float vc2, float x1, float x2, int cg1, int cg2) {

    cursor(170, 10); cout << "Velocidad c1 " << vc1;
    cursor(170, 11); cout << "Velocidad c2 " << vc2;

    cursor(170, 13); cout << "pos X1: " << x1;
    cursor(170, 14); cout << "pos X2: " << x2;

    cursor(170, 16); cout << "Carreras ganadas C1: " << cg1;
    cursor(170, 17); cout << "Carreras ganadas C2: " << cg2;


}

void dibuja_auto(int x, int y) {

    cursor(x, y);     cout << "    __     ";
    cursor(x, y + 1); cout << "  _|__|_   ";
    cursor(x, y + 2); cout << " '-O---O-' ";
}


void borra_auto(int x, int y) {

    cursor(x, y);     cout << "           ";
    cursor(x, y + 1); cout << "           ";
    cursor(x, y + 2); cout << "           ";
}

void dibujarauto2(int x, int y) {

    cursor(x, y);     cout << "   __    ";
    cursor(x, y + 1); cout << " _/  L_  ";
    cursor(x, y + 2); cout << "'-O--O-' ";
}

void borraauto2(int x, int y) {

    cursor(x, y);     cout << "           ";
    cursor(x, y + 1); cout << "           ";
    cursor(x, y + 2); cout << "           ";
}