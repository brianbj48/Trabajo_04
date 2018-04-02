#include "stdafx.h"
#include "menu.h"
#include "arithmetic.h"
#include "swap.h"
#include "nodo.h"
#include "list.h"


#include "main.h"
#include <cctype>

int PrintM() {
	std::locale::global(std::locale("spanish"));
	system("cls");
	int election;
	printf("Bienvenido nuevamente! Elija una opción:\n\n[1] Ejercicio 2 resuelto y ejercicio 3\n[2] Ejercicio 4\n\nIngrese un valor y presione ENTER:\n");

	scanf_s("%d", &election);
	system("cls");
	if ((election >0 && election < 10) || election == 99) {
		if (std::isdigit(election)) {
			Restart();
		}
		else return election;
	}
	else Restart();
}

void Restart() {
	std::cout << "Solo puede ingresar valores enteros entre 0 y 10, pulse una tecla para volver a empezar" << std::endl;
	_getch();
	main();
}



void menuPrint(int choice)
{

	switch (choice)
	{
		case 1:
			firstStep();
			break;
		case 2:
			secondStep();
			break;
		default:
			break;
	}	
}

void firstStep() {
	printf("\nResultado ejercicio 2: ");
	arithmetic();
	printf("\n\nEjercicio 3:\nIngrese dos numeros enteros para swap1\n");
	int *num1 = 0;
	int *num2 = 0;
	scanf_s("%d%d", &num1, &num2);
	swap_1(num1, num2);
	int num3 = 0;
	int num4 = 0;
	printf("\nIngrese dos numeros enteros para swap2\n");
	scanf_s("%d%d", &num3, &num4);
	swap_2(num3, num4);
}

void secondStep()
{
	list List;
	int menuExercise = 0;
	int value = 0;
	printf("Cuantos valores desea ingresar a la lista?\n");
	scanf_s("%d", &menuExercise);
	printf("Recuerde que solo puede ingresar valores enteros que no sean primos\n");
	for (int i = 1; i <= menuExercise; i++)
	{
		printf("\nIngrese el valor %d:\n", i);
		scanf_s("%d", &value);
		List.insert(value);
	}
}