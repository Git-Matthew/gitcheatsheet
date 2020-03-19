#include <stdio.h>

int main(int argc, char *argv[])
{
// Declare an int and double for some fake bug data.
	int bugs = 100;
	double bug_rate = 1.2;
	printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);

// Declare a huge number using a type long for storing big numbers.
	long universe_of_defects = 1L * 1024L * 1024L * 1024L;

// Print out that number using %ld which adds a modifier to the usual %d.
// Adding 'l' (the letter ell) means "print this as a long decimal".
	printf("The entire universe has %ld bugs.\n", universe_of_defects);
	double expected_bugs = bugs * bug_rate;
	printf("You are expected to have %f bugs.\n", expected_bugs);

// Bug rate compared to the bugs in the universe.
// It's so small though that we have to use %e to print it in scientific notation.
	double part_of_universe = expected_bugs / universe_of_defects;
	printf("That is only a %e portion of the universe.\n", part_of_universe);

// Make a character, with a special syntax '\0' which creates a 'nul byte' character.
// This is effectively the number 0.
	char nul_byte = '\0';
	int care_percentage = bugs * nul_byte;

// Print and notice there are %% (two percent chars) so we can print a '%' (percent) character.
	printf("Which means you should care %d%%.\n", care_percentage);
	return 0;
}

