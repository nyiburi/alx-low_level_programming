#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints out last part of a quote in the stadnard error.
 * Return: 1 if success.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n\n", 58);
	return (1);

}
