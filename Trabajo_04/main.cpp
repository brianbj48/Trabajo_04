// Trabajo_04.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "menu.h"


int main()
{
	printf("Bienvenido!\n1_Ejercicios 2,3\n2_Ejercicio 4\n");
	int choice = 0;
	printf("Ingrese un valor y presione ENTER:\n");
	scanf_s("%d", &choice);
	menuPrint(choice);
	_getch();
    return 0;
}





//int var = 40;
//int &ref = var; // Valid: Var is on memory. It has a reference. It can be allocated. 


//int &ref = 1; // Wrong: It doesn't exist in memory, therefore, it can't be referenced.


//int var = 1;
//int *ptr;
//int &ref = var;
//*ptr = ref;  // Invalid, pointer it must be initialized