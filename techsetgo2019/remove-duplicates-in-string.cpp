/*
Write a functions to remove all duplicate 
characters from the string such that the elements 
removed (while reading the string from left to 
right) occurs later.
*/

#include<iostream>
#include<string.h>
#define NO_OF_CHARS 256

using namespace std;


char* removeDuplicates(char* input1)
{
	int bin_hash[NO_OF_CHARS] = {0};
	int pointer=0;
	for(int i=0; i<strlen(input1); i++)
	{
		if(bin_hash[int(input1[i])]==0)
		{
			bin_hash[int(input1[i])]=1;
			input1[pointer]=input1[i];
			pointer++;
		}
	}
	input1[pointer]='\0';

	return input1;
}

int main()
{

	char input1[]="Csharpmaster";
	char input2[]="aaaaaaaaaaa";
	char input3[]="a";
	char input4[]=" ";
	cout<<removeDuplicates(input4);
	return 0;
}