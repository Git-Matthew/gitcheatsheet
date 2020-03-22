#include <stdio.h>

int main(int argc, char *argv[])
{

// Create two arrays, ages storing some int data, and names storing an array of strings
// create two arrays we care about
	int ages[] = {23, 43, 12, 89, 2};
	char *names[] =
	{
		"Alan", "Frank", "Mary", "John", "Lisa"
	};

//  looping through the two arrays and printing how old each person is
//  using i to index into the array.
// safely get the size of ages
	int count = sizeof(ages) / sizeof(int);
	int i = 0;

// first way using indexing
	for(i = 0; i < count; i++)
	{
		printf("%s has %d years alive.\n", names[i], ages[i]);
	}
	printf("---\n");

// setup the pointers to the start of the arrays
// use of int * to create a "pointer to integer" type of pointer
// similar to char * , which is a "pointer to char", and a string is an array of chars.
	int *cur_age = ages;
	char **cur_name = names;

// Loop through ages and names but instead use the pointers plus an offset of i
// *(cur_name+i) is the same as writing name[i] and is read as "value of (pointer cur_name plus i)"
// second way using pointers
	for(i = 0; i < count; i++)
	{
		printf("%s is %d years old.\n", *(cur_name+i), *(cur_age+i));
	}
	printf("---\n");

// This shows how the syntax to access an element of an array is the same for a pointer and an array.
// third way, pointers are just arrays
	for(i = 0; i < count; i++)
	{
		printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
	}
	printf("---\n");

// Another loop that does the same thing as the other two
// fourth way with pointers in a stupid complex way
	for(cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++)
	{
		printf("%s lived %d years so far.\n", *cur_name, *cur_age);
	}
	return 0;
}

// Notes:
// In ages[i], i is an address inside "ages" and "ages" is an address inside the computer
// basically i is an address of another address.
// C thinks your whole computer is one massive array of bytes

/////////////////////////////////////EXTRA CREDIT///////////////////////////////////
/*

- Currently really lost when it comes to pointers & some parts of arrays
couldnt really even start to think of how to solve this extra credit
tried looking for help online but nothing that i could solve sorry about that.

*/
