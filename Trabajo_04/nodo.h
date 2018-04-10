#pragma once

class nodo {
public:
	nodo(
		int value, 
		nodo *nextNodo = nullptr, 
		nodo *prevNodo = nullptr
	) : _value(value), _nextNode(nextNodo), _prevNode(prevNodo) {}


private:
	int _value;
	nodo *_nextNode;
	nodo *_prevNode;
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
