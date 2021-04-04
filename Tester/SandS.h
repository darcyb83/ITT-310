#pragma once
#define _CRT_SECURE_NO_WARNINGS
/*
* This code defines the word MY_SALT to be the number 13. And also creates an enum group called theMiddle which references animal names
*/
#define MY_SALT 13  //This is the define

struct Passwords {   //this is structure
	int partOne;
	char partTwo[26];
	int partThree;
	char lastPart[26];
} password;
