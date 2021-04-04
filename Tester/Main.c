/*
* This app is meant to create passwords that are easy to remember, but I could not get it to function how I wanted
* for some reason no matter what I did my fpos_t were always uninitialized, and also I cannot read correctly from the file
*/
#include "SandS.h"
#include "FavoriteNum.h"
#include <stdio.h>
#include <stdlib.h>

char  theAnimal[70] = {"string"};  //put this char string out here to avoid return value issues, did not help.
int getAnimal(int favNumb)  //function to get the chars following favNumb whitespaces, tried atleast twenty different ways, none worked for me.
{
	char c = 'a';   //create memory for char and initialize it
	FILE* file;  //file pointer
	int count = 0;  // counter 
	file = fopen("Animals.txt", "r");  //open the file in read mode
	if (file == NULL)  // Check if file exists 
	{
		printf("Could not open file "); //if not, error
		return -1;
	}
	else  //if no error
	{
		do  //whats in parenthasis while c is not \n
		{
			c = fgetc(file);  //get each char from file and use c to hold
			theAnimal[69] = c;  //the 69 char length string should be filled via c
		} while (c != '\n');
		
		fclose(file);  //close file
	}
	return (char)theAnimal[favNumb];  //bogus return value
}


int main()
{
	int favNum = getNum();  //Call function requesting user input favorite number
	int a = 0;
	char word[26];  //char array
	printf("Input one word you find easily remembered; \n"); //ask for user word input
	scanf_s("%s", word, sizeof(word) - 1);  //save user input to char array
	char theName[70] = "abcdefgh"; //create and initialize a 70 char string
	theName[69]	= getAnimal(favNum);  //create a 69 char string from return value....pointless
	theName[69] = theAnimal[69];  //change value of 69 char string to the 69 char string represented by theAnimal
	struct Passwords password1;  //create memory for password
	password1.partOne = MY_SALT;  //set partone of password to 
	password1.partTwo;  //up to line 42 puts the users word as part two
	for (int i = 0; i < sizeof(word); i++)
	{
		password1.partTwo[i] = word[i];
	}
	password1.partThree = favNum;   //part three is users number
	password1.lastPart;  //last part should be value of the first 25 char of theAnimal
	for (int i = 0; i < 25; i++)
	{
		password1.lastPart[i] = theAnimal[i];
	}
	
	printf("Your password is: \n");  //the next six lines display the password and then ends main
	printf("%i", password1.partOne);
	printf("%s", password1.partTwo);
	printf("%i", password1.partThree);
	printf("%s", password1.lastPart);
	return 0;
}