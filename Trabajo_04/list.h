#pragma once

class list {
public:
	list() : plist(NULL) {}
	~list() {
		pnodo aux;
		while (plist) {
			aux = plist;
			plist = plist->_nextNode;
			delete aux;
		}
	}
	void insert(int v);
	bool cleanList() { return plist == NULL; }
private:
	pnodo plist;
};


#if 0
list::~list() {
	pnodo aux;
	while (plist) {
		aux = plist;
		plist = plist->nextNodo;
		delete aux;
	}
}
#endif