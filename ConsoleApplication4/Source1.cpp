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
	printf("������� ����� �������: ");
	scanf("%d", &nz);
	if (nz == 1)


	{
		/*1.	��������� ���������, ������� �����������
		�������� ������ � ������� ��� ������,
		� ����� ������� ���������: "�������� ... � �������� ������ ..."
		(�� ����� ���������� ������ ���� ��������
		��������������� ��������)*/

		char avtor[20] = "�������� ";
		char nazvanie[20] = "�������� ������ ";

		printf("������� ��������: ");
		scanf("%s", avtor);
		printf("������� �������� ������: ");
		scanf("%s", nazvanie);


		printf("�������� %s,�������� ������ %s\n", avtor, nazvanie);
	}

	if (nz == 2)
	{
		/*2.	���� �������� ���� �����.
		��������� ��� �������� ���������� ��������� s1 � s2,
		����� ���� �������� s2 ��������� �������� t1,
		�������� s1 � �������� t2.*/

		char s1[10];
		char s2[10];

		printf("������� ������ ���� = \n");
		scanf("%s", s1);
		printf("������� ������ ��� = \n");
		scanf("%s", s2);

		char t1[10];
		char t2[10];
		strcpy(t1, s1);
		printf("������ ������ ���� - %s ����� %s: \n", s1, t1);

		strcpy(t2, s2);
		printf("������ ������ ��� - %s ����� %s: \n", t2, s2);
	}

	else if (nz == 3)
	{
		/*3.	���� �����. ������� �� ����� ��� ��������� ������.*/

		char slovo[] = "okno";
		printf(" ���� ��������� �����:%c \n", slovo[strlen(slovo) - 1]);
	}

	else if (nz == 5)
	{
		/*5.	���� �����. ����������, ���������
		�� ������ � ��������� ������� � ���.*/

		char slovo[15] = "velechina";
		printf("���� �����: %s\n", slovo);

		if (slovo[1] == slovo[3])
		{
			printf("������ � ��������� ������ ���������: %c\n", slovo[1]);
		}
		else
		{
			printf("�� ���������");
		}
	}

	else if (nz == 6)
	{
		/*7.	���� �����. �������� � ������� �� �����
		��������������, ��������� �� ��� �������
		� ���������� �������*/

		char slovo[10] = "������";
		printf("���� ��� ����� ���������� %c%c\n", slovo[1], slovo[2]);
	}

	else if (nz == 10)
	{
		/*10.	���� �����, ��������� �� ������� ����� ����.
		������� �� ����� ��� ������ ��������,
		�� ��������� �������� �����.*/

		char slovo[] = "����������";
		int sr = (strlen(slovo) / 2);
		slovo[sr] = '\0';

		printf("���� ��������= %s\n", slovo);
	}

	else if (nz == 11)
	{
		/*11.	������� ������ �������� �� 10 ���������.
		�������� �������-����� �� ������ '*'.*/

		char simvoly[] = "����� �����: 4860 4523 4856 4523";
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
		printf("���� �����-������� ������: %s\n", simvoly);


	}

	else if (nz == 12)
	{
/*12.	������� ������ �������� �� 11 ���������.
���������� ��� �������� �����-������� � ������� �������*/

		
		char arr[] = "������";

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


