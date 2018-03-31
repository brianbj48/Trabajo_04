#include "stdafx.h"
#include "menu.h"
#include "arithmetic.h"
#include "swap.h"
#include "nodo.h"
#include "list.h"


void menuPrint(int choice)
{

	switch (choice)
	{
		case 1:
			firstStep(); //
			break;
		case 2:
			secondStep();
			break;
		default:
			break;
	}	
}

void firstStep() {
	printf("Ejercicio2: ");
	arithmetic();
	printf("\nEjercicio3:\nIngrese dos numeros enteros para swap1\n");
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