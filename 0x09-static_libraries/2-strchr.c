#include "holberton.h"
#include <stdio.h>
/**
* _strchr - that locates a character in a string.
*@s: the string.
*@c: the character.
* Return: the modified string s.
*/
char *_strchr(char *s, char c)
{
	while (*s++ != '\0')
	{
		printf("test the loop while in evry incrimentation: this is the stirng pointer is point to %s\n", s);
		//the pointer is initialized at the begenning of the string
		//if it matchs the loop stops and return the string (starting where the pointer is intilized)
		//if not the pointer move one step and intilized the string with the new initilized pointer position !!! 
		// as shown the output of the test : !!!!!!!!!!
		//test the loop while in evry incrimentation: this is the stirng pointer is point to aaaahlem
		//test the loop while in evry incrimentation: this is the stirng pointer is point to aaahlem
		//test the loop while in evry incrimentation: this is the stirng pointer is point to aahlem
		//test the loop while in evry incrimentation: this is the stirng pointer is point to ahlem
		//test the loop while in evry incrimentation: this is the stirng pointer is point to hlem
		if (*s == c)
		return (s);
	}
	return (s);
}
