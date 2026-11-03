#pragma once
#include "Personaje.h"
#include <vector>

class GestorPersonaje {
public:
	GestorPersonaje ();
	~GestorPersonaje () {
		for (int i = 0; i < (int)personajes.size(); i++) delete personajes[i];
	};

	void RegistrarPersonaje(Personaje* p) { 
		personajes.push_back(p); 
	}
	//Listar todos los personajes
	std::vector<Personaje*> getPersonajes() { return personajes; }

	int atacar(int indice, int arma) {}

private:
	std::vector<Personaje*> personajes;
};

