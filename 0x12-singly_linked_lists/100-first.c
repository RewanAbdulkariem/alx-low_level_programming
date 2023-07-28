#include "lists.h"

/**
 * myStartupFun - Function executed before the main function.
 *
 * Description:
 * This function is marked with the GCC attribute
 * "__attribute__((constructor))" which makes it a
 * constructor function. Constructor functions are executed
 * automatically before the `main` function is invoked in sthe program's
 * execution.
 *
 * The purpose of this function is to print a message to the standard output
 * when the program starts. It serves as a startup message or a welcome message
 * to the user.
 *
 */
void myStartupFun(void) __attribute__((constructor));

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
