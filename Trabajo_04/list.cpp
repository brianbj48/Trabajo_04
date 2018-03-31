#include "stdafx.h"
#include "nodo.h"
#include "list.h"

void list::insert(int v) {
	if (v == 0) {
		printf("El numero debe ser 1 o mayor");
	}
	else
	{
		bool prime = true;
		for (int num = 2; num < v && prime; num++) {
			if (v % num == 0) {
				prime = false;
				break;
			}
		}
		if (prime) printf("El valor ingresado es primo, no ha sido incluído en la lista");
		else
		{
			if (cleanList()) {
				pnodo newNodo = new nodo(v);
				plist = newNodo;
			}
			else {
				pnodo newNodo = new nodo(v, plist->nextNodo, plist);
				plist->nextNodo = newNodo;
				if (newNodo->nextNodo) newNodo->nextNodo->previousNodo = newNodo;
			}
			printf("El valor es primo y ha ingresado correctamente en la lista");
		}
	}
}