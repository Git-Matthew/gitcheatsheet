#include <stdio.h>

// This code uses an if-statement to make sure you enter only 1 or 2 arguments.
int main(int argc, char *argv[])
{
	int i = 0;

	// The TEST parts are false if they evaluate to 0, and true otherwise.
	// Unlike other languages, parenthesis around the TEST elements are needed.
	if(argc == 1) //This checks to see if there is only one argument
	{
		printf("You only have one argument. You suck.\n");
	}

	// The {} braces to enclose the code are not needed, but it is bad form to not use them.
	else if(argc > 1 && argc < 4) // This checks to see if there is more than one but less than four.
	{
		printf("Here's your arguments:\n");
		for(i = 0; i < argc; i++)
		{
			printf("%s ", argv[i]);
		}
		printf("\n");
	}
	else // If neither of the above are true then it means there are more than four
	{
		printf("You have too many arguments. You suck.\n");
	}
	return 0;
}

	/* If Loop:
	if(TEST)
	{
		CODE;
	}
	else if(TEST)
	{
		CODE;
	}
	else
	{
		CODE;
	}
	*/

/////////////////////////////////////EXTRA CREDIT///////////////////////////////////
/*

- Boolean Operators in C:
AND -> A && B
OR -> A || B
NOT -> !A

- Test for equal to exactly 4:
	else if(argc = 4)
	{
		printf("FOUR!!! Jhin would be happy to see that number\n");
	}

- Break statements are used when not sure about the number of iterations
or we want to terminate the loop based on some condition.
In that case it's just add an if statement and a break inside the else
if the "if" is not true

- Fix: In the "You only have one argument" section, change it to:

 if((argc-1) == 1)
{
 	printf("You only have one argument. You suck.\n");
}

Because argv[0] also counts as 1 argument but not a user inputted one.

*/
