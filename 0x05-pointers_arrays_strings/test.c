#include <stdio.h>
#include <ctype.h>
int main (void)
{
	int i, j;
	int begin_of_number, end_of_numbers, is_a_number, isnot_a_number;
	char s[100] = "------++++++-----+++++--98++--";

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	/* find the first apperance of a digit in the string */
	begin_of_number = 0; 
	is_a_number = 0;
	j = 0;
	while (is_a_number == 0)
	{	
		if (isdigit(*(s + j)))
		{	
			is_a_number = 1; 
			begin_of_number = j;
		}
		else
		{
		j = j + 1;
		}
	}
	printf("the first occurence is : %c\n", s[j]);
	/* from that first position find the first non number char */
	isnot_a_number = 0;
	end_of_numbers = 0;
	j = begin_of_number;	
	while (isnot_a_number == 0)
	{
		if (isalpha(*(s + j)))
		{	
			isnot_a_number = 1;
			end_of_numbers = j - 1;
		}
		else
		{
		j = j + 1;
		}
	}
	printf("the last occurence is : %d\n", j);
	return (0);
}