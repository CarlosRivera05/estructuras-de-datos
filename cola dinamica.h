#pragma once
#include "Nodo.h"
#include "Dato.h"
class Cola
{
private:
	Nodo* inicio;
	Nodo* fin;
public:
	Cola();
	void Pop();
	void Push(Dato d);
	void Show();
	bool isempty();
};
