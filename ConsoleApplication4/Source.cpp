#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "proto.h"

#define SIZE 81
#define LIMIT 20

void main()
{
	int nz;
	printf("Enter number task: ");
	scanf("%d", &nz);

	if (nz == 1)
	{
		char inputData[LIMIT][SIZE];
		char * pt[LIMIT];

		printf("Enter more than %d lines", LIMIT);

		int i = 0;
		while (i < LIMIT
			&& gets_s(inputData[i]) != NULL
			&& inputData[i][0] != '\0')
		{
			pt[i] = inputData[i];
			i++;
		}
		sort(pt, i);
		puts("\nSorted list\n");
		for (int j = 0; j < i; j++)
		{
			puts(pt[j]);
		}
	}

	else if (nz == 2)
	{
		/*В заданной строке поменять местами первое и последнее слово строки.
		Разделителями слов считаются пробелы*/
		char string[SIZE];
		char mas[SIZE];
		fgets(string, SIZE, stdin);
		int k = 0;
		int kk = 0;

		//p na pp
		for (int i = strlen(string); i > 0; i--)
		{
			if (string[i] == ' ')
			{
				for (int j = i + 1; j <= strlen(string); j++)
				{
					mas[k] = string[j];
					k++;
				}

				break;
			}
		}

		//f pp
		kk = 0;
		for (int i = 0; i < SIZE; i++)
		{
			if (string[i] == ' ')
			{
				kk = i;
				/*	for (int j = 0; j < i; j++)
						putchar(string[j]);*/
				break;
			}
		}

		//
		for (int i = kk + 1; i <= (strlen(string) - k) - 1; i++)
		{
			mas[kk] = string[i];
			kk++;
		}

		//
		for (int i = 0; i < strlen(string); i++)
		{
			if (string[i] == ' ')
			{
				for (int j = 0; j < i; j++)
				{
					mas[kk] = string[j];
					kk++;
				}

				break;
			}
		}
		kk++;
		mas[kk] = '\0';
		printf("\n");


		printf("\n%s", mas);
	}

	else if (nz == 3)
	{
		/*Заданы две строки. Построить новую строку, состоящую из символов,
		которые входят как в одну, так и в другую строку*/
		char mas1[1][SIZE];
		char mas2[SIZE];
		for (int i = 0; i <= 1; i++)
		{
			gets_s(mas1[i], SIZE);
		}

		int ct = 0;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < strlen(mas1[i]); j++)
			{
				if (mas1[i][i] == mas1[i + 1][j])
				{
					mas2[i] = mas1[0][i];
					putchar(mas2[i]);
					//ct++;
				}
			}
		}
		//mas2[ct] = '\0';
		//printf("%s", mas2);

	}

	else if (nz == 4)
	{
		/*В заданной строке заменить каждый символ «*» числом,
		соответствующим номеру по порядку вхождения этого символа в строку*/
		char mas[20] = "He**o ** FR*ND";
		int count;
		for (int i = 0; i < 20; i++)
		{
			if (mas[i] == '*')
			{
				char s;
				itoa(i, &s, 10);
				mas[i] = s;
			}

		}
		printf("%s", mas);
	}

	else if (nz == 5)
	{
		/*Дан массив символов, содержащий текст.
		В строке между словами вставить вместо пробела запятую и пробел*/
		char mas[SIZE] = "Hello world its my";

		for (int i = 0; i < SIZE; i++)
		{
			if (mas[i] == ' ')
			{
				for (int j = strlen(mas)+1; j>i ; j--)
				{
					mas[j + 1] = mas[j];
				}
				mas[i] = ',';
				mas[i + 1] = ' ';
				i++;
			}
		}
		printf("%s\n", mas);
	}

	else if (nz == 6)
	{
		/* Введите массив символов из 11 элементов.
		Определить самый часто встречающийся символ и количество его повторений*/
		char mas[11]="hio hello";
		int count[11] = { 0 };
		for (int i = 0; i < strlen(mas); i++)
		{
			for (int j = 0; j < strlen(mas); j++)
			{
				if (mas[i] == mas[j] && i != j)
				{
					count[i]++;
				}
			}
		}
		for (int i = 0; i < strlen(mas); i++)
		{
			printf("%c - %d\n", mas[i], count[i]);
		}
		
	}

}
