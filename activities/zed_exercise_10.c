#include <stdio.h>

//  if you give one argument, the program's name is the first, so argc is 2.
int main(int argc, char *argv[])
{
	int i = 0;

// go through each string in argv
// skipping argv[0]
// tests that i is less than argc with the test i < argc . Since initially $1 < 2$ it will pass.
	for(i = 1; i < argc; i++)
	{
		printf("arg %d: %s\n", i, argv[i]);
	}

// let's make our own array of strings
// Same logic but used for states
	char *states[] =
	{
		"California", "Oregon", "Washington", "Texas"
	};
	int num_states = 4;

// Repeats until i is equal to or greater than the number of states.
	for(i = 0; i < num_states; i++)
	{
		printf("state %d: %s\n", i, states[i]);
	}
	return 0;
}

	/* For Loop:
	for(INITIALIZER; TEST; INCREMENTER)
	{
		CODE;
	}
	*/
