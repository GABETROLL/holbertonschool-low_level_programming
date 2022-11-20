#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%d\n", append_text_to_file(NULL, NULL));
	printf("%d\n", append_text_to_file("b", NULL));
	printf("%d\n", append_text_to_file("a", NULL));

	printf("%d\n", append_text_to_file(NULL, "hi\n"));
	printf("%d\n", append_text_to_file("b", "hi\n"));
	printf("%d\n", append_text_to_file("a", "hi\n"));

	return (0);
}

