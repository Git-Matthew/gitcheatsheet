#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
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
