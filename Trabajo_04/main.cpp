// Trabajo_04.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "menu.h"


int main()
{

	uint8_t choice = PrintM();
	menuPrint(choice);
	_getch();
    return 0;
}


#if 0

		Ejercicio 1:

int var = 40;
int &ref = var; // Valid: Var is on memory. It has a reference. It can be allocated. 


int &ref = 1; // Wrong: It doesn't exist in memory, therefore, it can't be referenced.


int var = 1;
int *ptr;
int &ref = var;
*ptr = ref;  // Invalid, pointer it must be initialized
#endif