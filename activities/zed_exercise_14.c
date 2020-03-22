#include <stdio.h>
#include <ctype.h>

// Include a new header file so we can gain access to isalpha and isblank

// forward declarations
// Tell C that you will be using some functions later in your program,
// without having to actually define them.
//  solves the problem of needing to use a function before you've defined it.
int can_print_it(char ch);
void print_letters(char arg[]);

// Define the print_arguments which knows how to print the
// same array of strings that main typically gets.
void print_arguments(int argc, char *argv[])
{
	int i = 0;
        for(i = 0; i < argc; i++)
        {
                print_letters(argv[i]);
        }
}

// Define the next function print_letters that is called by
// print_arguments and knows how to print each of the characters and their codes.
void print_letters(char arg[])
{
        int i = 0;
        for(i = 0; arg[i] != '\0'; i++)
        {
                char ch = arg[i];
                if(can_print_it(ch))
                {
                        printf("'%c' == %d ", ch, ch);
                }
        }
        printf("\n");
}

// Define can_print_it which simply returns the truth value
//(0 or 1) of isalpha(ch) || isblank(ch) back to its caller print_letters
int can_print_it(char ch)
{
        return isalpha(ch) || isblank(ch);
}

// calls print_arguments to make the whole chain of function calls go off.
int main(int argc, char *argv[])
{
        print_arguments(argc, argv);
	return 0;
}
/////////////////////////////////////EXTRA CREDIT///////////////////////////////////
/*

-Code with less functions:
#include <stdio.h>
#include <ctype.h>

void print_letters(char arg[])
{
	int i = 0;
	char ch = ' ';
	for (i=0; (ch = arg[i]) != '\0'; i++)
	{
		if (isalpha((int)ch) || isblank((int)ch))
		{
			printf("'%c' == %d ", ch, ch);
		}
	}
}

int main(int argc, char *argv[])
{
	int i = 0;
	for (i=0; i < argc; i++)
{
	print_letters(argv[i]);
}
	return 0;
}

- Could not figure out a way to use strlen() and then comparing it to an integer
without affecting the fact that one is a pointer and the other a char, would
like some help/explanation in a future class.

- Differences between K&R vs ANSI syntax:

// K&R syntax
int foo(a, p)
int a;
char *p;
{
	return 0;
}
// ANSI syntax
int foo(int a, char *p)
{
	return 0;
}

- isalpha checks to see if it's an alphabetical character
and isblank checks to see if it's a blank space as in nothing there.

*/


