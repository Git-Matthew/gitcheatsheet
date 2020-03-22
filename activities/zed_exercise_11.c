#include <stdio.h>

// In C, there's not really a "boolean" type, and instead any integer that's 0 is "false" and otherwise it's "true"
// C strings are character arrays.
int main(int argc, char *argv[])
{

// go through each string in argv
	int i = 0;
	while(i < argc)
	{
		printf("arg %d: %s\n", i, argv[i]);
		i++;
	}

// let's make our own array of strings
	char *states[] =
	{
		"California", "Oregon", "Washington", "Texas"
	};
	int num_states = 4;
	i = 0;

// watch for this
	while(i < num_states)
	{
		printf("state %d: %s\n", i, states[i]);
		i++;
	}
	return 0;
}

	/* While Loop:
	while(TEST)
	{
		CODE;
	}
	*/

/////////////////////////////////////EXTRA CREDIT///////////////////////////////////
/*

- It just prints them backwards:
	int i = 4;
	while(i > 0)
	{
		printf("arg %d: %s\n", i, argv[i]);
		i--;
	}

- Just comment the "//Let's make our own array of strings" part
and add this instead:
	i = 0;
	char *states[4];
	while (i < argc)
	{
		if (i < 4)
		{
			states[i] = argv[i];
		}
		i++;
	}

- Aparently not because for that the "strcpy" function is needed
right now its probably just a pointer to the arg string not a copy.

*/
