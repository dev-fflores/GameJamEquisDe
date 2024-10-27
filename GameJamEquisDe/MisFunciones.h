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

    for (int i = y; i < 40; i++) {
        cursor(x, i); cout << "|";
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