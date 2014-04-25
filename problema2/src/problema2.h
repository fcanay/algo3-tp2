#ifndef PROBLEMA_2_H
#define PROBLEMA_2_H

#include <list>
#include <utility>
#include <iostream>

using namespace std;

namespace Problema2
{
	struct Pueblo{
		int id;
		pair <int, int> coord;
		Pueblo(int id ,int x ,int y)
			: id(id), coord(make_pair(x,y)){}
		
	};

	struct Entrada
	{
	  int cantCentrales;
	  list < Pueblo > pueblos;
	};

	struct Salida
	{
	  list < Pueblo > centrales;
	  list < pair < Pueblo,Pueblo > > tuberias;
	};

	Entrada leerEntrada();

	Salida resolver(const Entrada& e);

	void imprimoSalida(const Salida& s);
}

#endif /* PROBLEMA_2_H */
