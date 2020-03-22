#include <stdio.h>

int main(int argc, char *argv[])
{
	int areas[] = {10, 12, 13, 14, 20};

// To C, name and full_name are identical methods of creating a char array.
	char name[] = "Zed";
	char full_name[] =
	{
		'Z', 'e', 'd', ' ', 'A', '.', ' ', 'S', 'h', 'a', 'w', '\0'
	};

// WARNING: On some systems you may have to change the
// %ld in this code to a %u since it will use unsigned ints.
// My computer thinks an int is 4 bytes in size. Might be different on 32bit or 64bit machines.
	printf("The size of an int: %ld\n", sizeof(int));

// The areas array has 5 integers in it, so it makes sense that the computer requires 20 bytes to store it.
	printf("The size of areas (int[]): %ld\n", sizeof(areas));

// If we divide the size of areas by size of an int then we get 5 elements.
	printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));

//  C is "zero indexed" like Python and Ruby.
	printf("The first area is %d, the 2nd %d.\n", areas[0],areas[1]);

	printf("The size of a char: %ld\n", sizeof(char));

// It says it's 4 bytes long, but we only typed "Zed" for 3 characters.
	printf("The size of name (char[]): %ld\n", sizeof(name));
	printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));
	printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
	printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));

// Print the name and full_name to prove that they actually are "strings" according to printf.
	printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);
	return 0;
}
/////////////////////////////////////EXTRA CREDIT///////////////////////////////////
/*

- It doesn't count it

- Prints it out as string

- Doesnt allow it because it isnt char.

- Not initialized yet.

- Sizes used: 6-, 8-, 12-, 16-, 18-, 24-, 32-, 36-, 39-, 40-, 48-, 60-, and 64-bit.

*/
