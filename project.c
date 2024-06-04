#include <stdio.h>
int main (int argc, char **argv)
{
	char name[255];

	printf("Enter your name: ");
	fgets(name,255,stdin);
	printf("Hello world!!");
	return 0;
}