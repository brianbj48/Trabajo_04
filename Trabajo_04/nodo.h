#pragma once

class nodo {
public:
	nodo(
		int v, 
		nodo *next = NULL, 
		nodo *prev = NULL
	) : value(v), nextNodo(next), previousNodo(prev){}

private:
	int value;
	nodo *nextNodo;
	nodo *previousNodo;
	friend class list;
};

typedef nodo *pnodo;

//nodo::~nodo() {
//	pnodo aux;
//		aux = pNodo;
//		delete aux;
//	}
//};