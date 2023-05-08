#include <stdio.h>
#include <stdlib.h>

/**
* Prints the value of an integer pointer if it is not null.
*
* @param bar The integer pointer to print the value of.
* @return void
*/
void foo(int *bar)
{
/**
* If the input integer pointer is not null, prints the value of the integer
* it points to.
*/
if (bar != NULL)
{
printf("The value of bar is %d\n", *bar);
}
}

/**
* Allocates memory for an integer pointer, assigns it a value, calls the foo
* function with the pointer, and frees the memory.
*
* @param argc The number of command-line arguments.
* @param argv An array of strings containing the command-line arguments.
* @return 0 if the program executed successfully, 1 otherwise.
*/
int main(int argc, char **argv)
{
/**
* Allocates memory for an integer pointer and assigns it the value 42.
* Calls the foo function with the pointer and frees the memory.
*
* @return 0 if the program executed successfully, 1 otherwise.
*/
int *ptr = malloc(sizeof(int));
if (ptr == NULL)
{
fprintf(stderr, "Failed to allocate memory\n");
return (1);
}

*ptr = 42;
foo(ptr);

free(ptr);
return (0);
}
