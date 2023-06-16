#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - Entry poiter
*
* Decription :prints the alphabet in lowercase, followed by a new line
* Return: Alwyas 0 (Success)
*/
int main(void)
{
	int x;

	for (x = 97; x <= 122; x++)
		putchar (x);
	for (x = 65; x <= 90; x++)
		putchar ('X');
	putchar('\n');
		return (0);
}
