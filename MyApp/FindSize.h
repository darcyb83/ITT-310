/*
* This function takes a char array as an arguement and returns it's length as an int
 */
#include <stdio.h>
//Lines 7-8 create variables used for the matching, if char matches one of the variables then length++  
const char lowers[28] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
const char uppers[28] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
//Line 10 begins the function called matches, it takes a char array noted here as theMatched as argument
int matches(char theMatched[])
{
	int theSize = 0, hold = 0;  //Basically these are just placeholders
	for (int i = 0; i <= theMatched[i]; i++)  //This for loop goes through every char in the array
	{
		do
		{
			if (theMatched[i] == lowers[hold]) //This is part of the do, while i is <= 25 if theMatched[i] is the same as lowers[hold]
			{
				theSize++;  //Add one to theSize
				break;  //Break loop
			}
			else if (theMatched[i] == uppers[hold])  //If theMatched doesnt match lowers if it matches uppers
			{
				theSize++;  //Add one to theSize
				break;  //Break loop
			}
			else  //If theMatched does not match lowers or uppers
			{

				hold++;  //Add one to hold
				continue; //Continue 
			}
		}while(hold <= 25);
		if (hold == 25)  //If the do while loop does not find a match 26 times 
		{
			hold = 0;  //hold is zero 
			break;  //Break loop
		}
	}
	return theSize;
}