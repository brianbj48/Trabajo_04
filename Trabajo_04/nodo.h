#pragma once

class nodo {
public:
	nodo(
		int value, 
		nodo *nextNodo = NULL, 
		nodo *prevNodo = NULL
	) : _value(value), _nextNode(nextNodo), _prevNode(prevNodo) {}
	/*~nodo() {
		pnodo aux;
		aux = _pNodo; 
		delete aux;
	}*/

private:
	int _value;
	nodo *_nextNode;
	nodo *_prevNode;
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
