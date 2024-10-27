#include "pch.h";
#include <iostream>
#include <Windows.h>
using namespace System;
using namespace std;

const int HEIGHT = 200;
const int WIDTH = 50;

struct Vector2 {
	int x, y;
};


struct PowerUp {
	Vector2 position;
	char symbol;
	ConsoleColor color;
	bool active;
	float speed_multiplier = 1.2f;

	void draw() {
		Console::SetCursorPosition(position.x, position.y);
		Console::ForegroundColor = color;
		cout << symbol;
	}

	void clear() {
		Console::SetCursorPosition(position.x, position.y);
		cout << ' ';
	}

	void update() {
		position.y++;
	}

	void checkCollision(Vector2 player_position) {
		if (position.x == player_position.x && position.y == player_position.y) {
			active = false;
		}
	}

	void reset(Vector2 player_position) {
		position.x = rand() % WIDTH;
		position.y = rand() % HEIGHT;
		active = true;
	}
};


void configWindow() {
    Console::SetWindowSize(HEIGHT, WIDTH);
    Console::CursorVisible = false;
}
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

void opcionesdemenu() {
    int escoger = 0;
    showIntro();
    Sleep(200);

    system("cls");

    while (1) {
        system("cls");
        escoger = mostrarmenu();
        system("cls");

        switch (escoger) {
        case 1:
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
	configWindow();
	dibujarCarro();


    system("pause>0");
    return 0;
}
