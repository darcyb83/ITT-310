/*
* This program requests info from user and then transforms that info into a memorable password
* that is somewhat secure
*/

#include <string.h>
#include "AskFavNumber.h"
#include "FindSize.h"
#include "StructAndSalt.h"
#include "RemoveWarning.h"


char dataRead[26];

char* getAnimal(int lineNumber)
{
	int a, count = 0;
	FILE* file = fopen("Animals.txt", "r");

	if (file == NULL)
	{
		printf("ERROR!! The file Animals.txt was not found \n");
	}
	else
	{
		fpos_t pos;
		do
		{
			a = fgetc(file);
			if (a == '\n')
			{
				count++;
				break;
			}
			if (lineNumber == count)
			{
				fgetpos(file, &pos);
				break;
			}

		} while (a != EOF);
		fsetpos(file, &pos);
		fgets(dataRead, 26, file);
		fclose(file);

		printf("%i", count);
	}
	return dataRead;
}


int main()
{
	struct Passwords Password1;
	char word[26];
	printf("Input one word you find easily remembered; \n");
	scanf_s("%s", word, sizeof(word) -1);
	int theNum = getNum();
	int sLength = strlen(word);
	getAnimal(sLength);
	Password1.partOne = MY_SALT;
	Password1.partTwo;
	Password1.partThree = theNum;
	Password1.lastPart;
	for (int i = 0; i < 26; i++)
	{
		Password1.partTwo[i] = word[i];

		Password1.lastPart[i] = dataRead[i];
	}
	printf("Your password is: \n");
	printf("%i", Password1.partOne);
	printf("%s", Password1.partTwo);
	printf("%i", Password1.partThree);
	printf("%s", Password1.lastPart);
	return 0;
}

