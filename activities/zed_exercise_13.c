#include <stdio.h>

int main(int argc, char *argv[])
{

// this is how you abord a program
// The compiler marks the place in the program where the switchstatement starts
	if(argc != 2)
	{
		printf("ERROR: You need one argument.\n");
		return 1;
	}
	int i = 0;

// evaluates the expression in switch(letter) to come up with a number
	for(i = 0; argv[1][i] != '\0'; i++)
	{
		char letter = argv[1][i];
		switch(letter)
		{
			case 'a':	//fallthrough
			case 'A':
			printf("%d: 'A'\n", i);
			break;
			case 'e':	//fallthrough
			case 'E':
			printf("%d: 'E'\n", i);
			break;
			case 'i':	//fallthrough
			case 'I':
			printf("%d: 'I'\n", i);
			break;
			case 'o':	//fallthrough
			case 'O':
			printf("%d: 'O'\n", i);
			break;
			case 'u':	//fallthrough
			case 'U':
			printf("%d: 'U'\n", i);
			break;
			case 'y':	//fallthrough
			case 'Y':
//  it runs the code, hits the break then exits out of the switch-statement entirely.
// it's only sometimes y
			if(i > 2)
			{
				printf("%d: 'Y'\n", i);
			}
			break;
			default:
			printf("%d: %c is not a vowel\n", i, letter);
		}
	}
	return 0;
}

/////////////////////////////////////EXTRA CREDIT///////////////////////////////////
/*

- Switch Case for lowercase to uppercase conversion:
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char** argv)
{
                int letter = argv[1][0];
                switch(letter)
                {
                case 97:
                case 98:
                case 99:
                case 100:
                case 101:
                case 102:
                case 103:
                case 104:
                case 105:
                case 106:
                case 107:
                case 108:
                case 109:
                case 110:
                case 111:
                case 112:
                case 113:
                case 114:
                case 115:
                case 116:
                case 117:
                case 118:
                case 119:
                case 120:
                case 121:
                case 122:
                        letter = (letter-32);
                        char input = letter;
                        printf("\n %c \n",input);
                        break;
                default:
                        printf("\n Input is either not a letter or already uppercase. \n");
                }
	return 0;
}

- Switch statement to if statement conversion:
	if((letter == 'a')||(letter == 'A')){
		printf("%d: 'A' \n", i);}
	elseif((letter == 'e')||(letter == 'E')){
		printf("%d: 'E' \n", i);}
	elseif((letter == 'i')||(letter == 'I')){
		printf("%d: 'I' \n", i);}
	elseif((letter == 'o')||(letter == 'O')){
		printf("%d: 'O' \n", i);}
	elseif((letter == 'u')||(letter == 'U')){
		printf("%d: 'U' \n", i);}
	elseif((letter == 'y')||(letter == 'Y')){
		printf("%d: 'Y' \n", i);}
	else 
		printf("is not a vowel");

- It will not work because it will break before leaving the if cycle.

*/
