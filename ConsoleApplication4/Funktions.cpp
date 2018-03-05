#include <stdio.h>
#include <string.h>

void sort(char * string[], int len)
{
	char * temp;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (strcmp(string[i], string[j]) > 0)
			{
				temp = string[i];
				string[i] = string[j];
				string[j] = temp;
			}
		}
	}
}
