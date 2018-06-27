#include "stdafx.h"
#include <iostream>
#include <cstdio>

using namespace std;

int cmp1(char* string1, char* string2) {
	for (; (*string1 == *string2) && *string1; string1++, string2++);
	return (int)*string1 - (int)*string2;
}

void copy1(char* string1, char* string3) {
	while (*string3++ = *string1++);
}

int strint(char* string) {
	int val = 0;
	for (; *string;	string++) {
		if (('0' <= *string) && (*string <= '9')) {
			val = val * 10;
			val = val + (*string - '0');
		}
	}
	return val;
}

char* func(char* string1, char* string2) {
	char *s = string1;
	while (*string1++);
	string1--;
	while (*string1++ = *string2++);
	return s;
}

int main()
{
	char string1[50] = "Hello boys";
	char string2[50] = "Hello girls";
	char string3[50];

	printf("%d\n", cmp1(string1, string2));
	copy1(string1, string3);
	//printf("%s\n", string3);

	puts(string3);

	char num1[] = "7854";
	printf("%d\n", strint(num1));
	char num2[] = "45a8";
	printf("%d\n", strint(num2));
	char num3[] = "aqwe";
	printf("%d\n", strint(num3));
	
	cout << func(string1, string2) << endl;
	system("pause");
	return 0;
}
