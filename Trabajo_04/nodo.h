#pragma once

class nodo {
public:
	nodo(
		int value, 
		nodo *nextNodo = NULL, 
		nodo *prevNodo = NULL
	) : _value(value), _nextNodo(nextNodo), _prevNodo(prevNodo) {}
	/*~nodo() {
		pnodo aux;
		aux = _pNodo; 
		delete aux;
	}*/

private:
	int _value;
	nodo *_nextNodo;
	nodo *_prevNodo;
	//pnodo _pNodo;
	friend class list;
};

typedef nodo *pnodo;

#if 0
nodo::~nodo() {
	pnodo aux;
		aux = pNodo;
		delete aux;
	}
};
#endif
