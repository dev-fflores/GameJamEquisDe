#pragma once
#include "MisFunciones.h"
#include <iostream>

using namespace System;
using namespace std;


struct Vector2
{
	float x;
	float y;

	Vector2() {
		x = 0;
		y = 0;
	}

	Vector2(float x, float y) {
		this->x = x;
		this->y = y;
	}
};

struct Car {
	Vector2 position;
	int direction;
	float velocity;
	int wins;
	char sprite[3][9];
	ConsoleColor color;

	void draw() {
		Console::ForegroundColor = color;
		// dibujar el carro de 4 de alto y 9 de ancho en la posicion x, y
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 9; j++) {
				Console::SetCursorPosition(position.x + j, position.y + i);
				cout << sprite[i][j];
			}
		}
	}

	void clear() {
		for (int i = 0; i < 3; i++) {
			Console::SetCursorPosition(position.x, position.y + i);
			cout << "       ";
		}
	}

	void update() {
		clear();
		if (direction == 0 && position.x < WIDTH - 10) {
			position.x += velocity;
		}
		else if (direction == 1 && position.y > 0) {
			position.y -= velocity;
		}
		else if (direction == 2 && position.x > 0) {
			position.x -= velocity;
		}
		else if (direction == 3 && position.y < HEIGHT - 4) {
			position.y += velocity;
		}
		draw();
	}
};

struct PowerUp {
	Vector2 position;
	bool active;
	char sprite;
	ConsoleColor color;

	void draw() {
		Console::SetCursorPosition(position.x, position.y);
		Console::ForegroundColor = color;
		cout << sprite;
	}

	void clear() {
		Console::SetCursorPosition(position.x, position.y);
		cout << " ";
	}

	void update() {
		if (!active) {
			clear();
		}
		else {
			draw();
		}
	}

	void checkCollision(Vector2 player_position) {
		if (position.x >= player_position.x && position.y == player_position.y) {
			active = false;
			cout << "colisiono";
			clear();
		}
		cout << "position player x: " << player_position.x << "| position playeyr y: " << player_position.y;
		cout << "position powerup x: " << position.x << "| position powerup: " << position.y;
	}
};


struct Map {
	char map[HEIGHT][WIDTH];
	ConsoleColor color;


	void draw() {
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
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	void clear() {
		for (int i = 0; i < HEIGHT; i++) {
			for (int j = 0; j < WIDTH; j++) {
				Console::SetCursorPosition(j, i);
				cout << " ";
			}
		}
	}
	void update() {
		//clear();
		draw();
	}
};

