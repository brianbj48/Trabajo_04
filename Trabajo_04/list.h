#pragma once

class list {
public:
	list() : plist(NULL) {}
	~list();
	void insert(int v);
	bool cleanList() { return plist == NULL; }
private:
	pnodo plist;
};



list::~list() {
	pnodo aux;
	while (plist) {
		aux = plist;
		plist = plist->nextNodo;
		delete aux;
	}
}
