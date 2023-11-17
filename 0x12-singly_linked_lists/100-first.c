#include <stdlib>

void first(void) __attribute__((constructor));
/**
 * first - a function to printf before main
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
