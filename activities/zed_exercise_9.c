#include <stdio.h>

int main(int argc, char *argv[])
{
	int numbers[4] = {0};
	char name[4] = {'a'};
	// first, print them out raw
	// This is just trying to print them without setting them up beforehand.
	// I didn't have to give all 4 elements of the arrays to initialize them.
	// This is a short-cut that C has where, if you set just one element, it'll fill the rest in with 0.
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

	// When each element of name is printed, only the first element 'a'
	// shows up because the '\0' character is special and won't display.

	printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

	// The first time we print name it only prints "a" because,
	// since the array will be filled with 0 after the first 'a' in the initializer,
	// then the string is correctly terminated by a '\0' character
	printf("name: %s\n", name);

	// Now it gives them values
	// setup the numbers
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
	// setup the name
	name[0] = 'Z';
	name[1] = 'e';
	name[2] = 'd';
	name[3] = '\0';

	//And prints them out again
	// then print them out initialized
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
	printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

	// Prints the whole name
	// print the name like a string
	printf("name: %s\n", name);

	// Same concept different execution
	// Two syntaxes for doing a string: char name[4] = {'a'} and char *another = "name".
	// The first one is less common and the second is what you should use for string literals like this.
	char *another = "Zed";
	printf("another: %s\n", another);
	printf("another: %s\n", another);
	printf("another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);
	return 0;
	// Note: printf thinks that the name is just a string. This is because to the C
	// language there's no difference between a string and an array of characters.
}

/////////////////////////////////////EXTRA CREDIT///////////////////////////////////
/*

- None, just got long negative numbers as a result.

- It printed a "?" symbol instead of the number 
as if it didn't understand which character it was.

- 2 more per each if you print the char as int and viceversa
plus all of them at the same time in array form.

- Yes, either because char is a numeric type 
or using atoi on the array of chars.

- I got a warning: incompatible integer to pointer conversion
initializing 'char *' with an expression of type 'int'
[-Wint-conversion]

*/
