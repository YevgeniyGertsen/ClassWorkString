#include <iostream>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <Windows.h>

void main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int nz;
	printf("Введите номер задания: ");
	scanf("%d", &nz);
	if (nz == 1)


	{
		/*1.	Составить программу, которая запрашивает
		название романа и фамилию его автора,
		а затем выводит сообщение: "Писатель ... — название романа ..."
		(на месте многоточий должны быть выведены
		соответствующие значения)*/

		char avtor[20] = "Писатель ";
		char nazvanie[20] = "Название романа ";

		printf("Введите писателя: ");
		scanf("%s", avtor);
		printf("Введите название романа: ");
		scanf("%s", nazvanie);


		printf("Писатель %s,название романа %s\n", avtor, nazvanie);
	}

	if (nz == 2)
	{
		/*2.	Даны названия двух стран.
		Присвоить эти названия переменным величинам s1 и s2,
		после чего название s2 присвоить величине t1,
		название s1 — величине t2.*/

		char s1[10];
		char s2[10];

		printf("Введите страну один = \n");
		scanf("%s", s1);
		printf("Введите страну два = \n");
		scanf("%s", s2);

		char t1[10];
		char t2[10];
		strcpy(t1, s1);
		printf("Теперь страна один - %s равна %s: \n", s1, t1);

		strcpy(t2, s2);
		printf("Теперь страна два - %s равна %s: \n", t2, s2);
	}

	else if (nz == 3)
	{
		/*3.	Дано слово. Вывести на экран его последний символ.*/

		char slovo[] = "okno";
		printf(" Наша последняя буква:%c \n", slovo[strlen(slovo) - 1]);
	}

	else if (nz == 5)
	{
		/*5.	Дано слово. Определить, одинаковы
		ли второй и четвертый символы в нем.*/

		char slovo[15] = "velechina";
		printf("Наше слово: %s\n", slovo);

		if (slovo[1] == slovo[3])
		{
			printf("Второй и четвертый символ одинаковы: %c\n", slovo[1]);
		}
		else
		{
			printf("Не одинаковы");
		}
	}

	else if (nz == 6)
	{
		/*7.	Дано слово. Получить и вывести на экран
		буквосочетание, состоящее из его второго
		и четвертого символа*/

		char slovo[10] = "алматы";
		printf("Наши две буквы образовали %c%c\n", slovo[1], slovo[2]);
	}

	else if (nz == 10)
	{
		/*10.	Дано слово, состоящее из четного числа букв.
		Вывести на экран его первую половину,
		не используя оператор цикла.*/

		char slovo[] = "вероятност";
		int sr = (strlen(slovo) / 2);
		slovo[sr] = '\0';

		printf("Наша половина= %s\n", slovo);
	}

	else if (nz == 11)
	{
		/*11.	Введите массив символов из 10 элементов.
		Замените символы-цифры на символ '*'.*/

		char simvoly[] = "Номер карты: 4860 4523 4856 4523";
		int c = 0;
		for (int i = 0; i < strlen(simvoly); i++)
		{
			if (simvoly[i] == ' ')
				c++;

			if (c == 3||c==4)
				if ((int)simvoly[i] >= 48 && (int)simvoly[i] <= 57)
				{
					simvoly[i] = '*';
				}
		}
		printf("Наши цифры-символы теперь: %s\n", simvoly);


	}

	else if (nz == 12)
	{
/*12.	Введите массив символов из 11 элементов.
Переведите все строчные буквы-символы в верхний регистр*/

		
		char arr[] = "алматы";

		for (int i = 0; i < strlen(arr); i++)
		{
			//printf("%d-%c\n", ((int)arr[i]) - 32, ((int)arr[i])-32);
			*(arr + i) = ((int)*(arr+i))-32;
		}
		printf("%s\n", arr);
		/*for (int i = 0; i < 256; i++)
		{
			printf("%d-%c\n", i, i);
		}*/
	}
}


