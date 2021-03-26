/*
* This function gets an int from user and checks that is an int
*/
#include <stdio.h>

int favNumber;
int getNum()
{
	printf("Whats one of your favorite numbers? \n");
	scanf_s("%d", &favNumber);
	return favNumber;
}

//void main()
//{
//	char theNumber = getNum();
//	printf("\n Your number is: %d", theNumber);
//	return;
//}