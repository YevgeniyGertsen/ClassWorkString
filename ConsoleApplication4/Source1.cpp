#include <iostream>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <Windows.h>
#include <time.h>
#include "HWorkWithStudent.h"

using namespace std;

void main()
{

	//for (size_t i = 0; i < 255; i++)
	//{
	//	printf("%d - %c\n", i, i);
	//}
	//return;
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(NULL));

	int nz;
	printf("Введите номер задания: ");
	scanf("%d", &nz);
	cin.get();
	if (nz == 1)
	{
		Stydent *st= (Stydent*)malloc(sizeof(Stydent) * 20);
		if (st != NULL)
		{
			for (size_t i = 0; i < 20; i++)
			{
				(st+i)->fName = 
					(char*)malloc(30 * sizeof(char));
				generateName((st + i)->fName);
				
				(st + i)->group =
					(char*)malloc(10 * sizeof(char));
				generateGroup((st + i)->group);

				(st+i)->subject = 
					(Subject*)malloc(10 * sizeof(Subject));

				for (size_t s = 0; s < 10; s++)
				{
					generateSubject(&((st + i)->subject[s]));
				}
				
			}
		}

		printf("\n-----------------------------------\n");
		for (size_t i = 0; i < 20; i++)
		{
			printf("#%3d. %s - %s\n", 
				i+1, 
				(st + i)->group, 
				(st + i)->fName);

			for (int s = 0; s < 10; s++)
			{
				printf(" ->%s - %d\n",
					(st + i)->subject[s].nameSubject,
					(st + i)->subject[s].bal);
			}
		}
		printf("\n-----------------------------------\n");
	}

}


