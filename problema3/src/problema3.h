#ifndef PROBLEMA_3_H
#define PROBLEMA_3_H

#include <list>
#include <utility>
#include <iostream>
#include <vector>

using namespace std;

namespace Problema3
{
	struct Casillero{
		int f;
		int c;
		int k;
		Casillero(){;}
		Casillero(int f,int c, int k)
			:f(f),c(c),k(k) {}	
	};
	struct Entrada
	{
	  int n;
	  int k_max;
	  vector< vector < int > > tablero;
	  Casillero origen;
	  Casillero destino;
	  
	};

	struct Salida
	{
	  int saltos;
	  list< Casillero > caminoMinimo;
	};

	Entrada leerEntrada();

	Salida resolver(Entrada& e);

	void imprimoSalida(Salida& s);
	list< Casillero > losAdyacentes(const Entrada& e, const Casillero& c);
}

#endif /* PROBLEMA_3_H */
