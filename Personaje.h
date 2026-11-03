#pragma once
#include "pch.h"

class Personaje {
public:
	Personaje(std::string name, int HP) : nombre(name), vida(HP) {};
	~Personaje ();

	std::string getNombre() { return nombre; }
	int getVida() { return vida; }

private:
	std::string nombre;
	int vida;
};

