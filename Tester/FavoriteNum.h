#pragma once

/*
* This function gets an int from user and checks that is an int
*/
#include <stdio.h>


int getNum()
{
	int favNumber, check = 0; //holders
	printf("Between 1 and 60 whats one of your favorite numbers?(Or choose randomly from 1-60) \n"); //ask for user input
	scanf_s("%i", &favNumber);  //save user input
	for (int i = 1; i <= 60; i++)  //up to line 26 verifys user response is int
	{
		if (favNumber != i && i == 60)
		{
			printf("Please ensure a number between 1 and 60 is chosen!! Please try again... \n");  // if not int will error
			return -1;
		}
		else
		{
			i = 61;
			break;
		}
	}
	return favNumber;  // return user input
}
