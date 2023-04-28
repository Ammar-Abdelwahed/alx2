#include <stdio.h>
void before_main() __attribute__((constructor));
/**
 * before_main - constructor executed before main func
 */
void before_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
