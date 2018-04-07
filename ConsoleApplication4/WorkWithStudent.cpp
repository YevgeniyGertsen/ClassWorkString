#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Subject
{
	char * nameSubject;
	int bal;
};

struct Stydent
{
	char * fName;
	char * group;
	Subject * subject;
};

void generateName(char * name)
{
	int lName = 1 + rand() % 10;
	for (size_t i = 0; i < lName; i++)
	{
		if (i == 0)
			*(name + i) = (char)(65 + rand() % 24);
		else
			*(name + i) = (char)(97 + rand() % 24);
	}
	*(name + lName) = '\0';
	//65-89
	//97-122
	//strcpy
}

void generateGroup(char * groupName)
{
	int groupNumber = 10 + rand() % 90;

	char gName[5];
	itoa(groupNumber, gName, 10);

	strcpy(groupName, "PMB # ");

	strcat(groupName, gName);
}

void generateSubject(Subject *sub)
{
	sub->nameSubject = (char*)malloc(sizeof(char) * 50);

	generateName(sub->nameSubject);
	sub->bal = 1 + rand()%9;
}