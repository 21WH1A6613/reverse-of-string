#include<stdio.h>
#include<string.h>
int main()
{
	char string[10];
	puts("enter string1");
	gets(string);
	printf("%s",strrev(string));
}
