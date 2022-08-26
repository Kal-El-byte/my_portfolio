/**
 * Write a programme that print date entered between 1850 and 2050
 *
 * consider leap year
 * entry format : dd/mm/yyyy
 *
 * Return 0
 */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int d, m, y;
	int flag = 1, isleap = 0;
	
	// collect user input
	printf("Enter date (dd/mm/yyyy)): ");
	scanf("%d/%d/%d", &d, &m, &y);

	//is a leap year
	if ((y%4==0 && y%100!=0) || y%400==0)
		isleap=1;
	if (y<=1850 || y>=2050)
		flag=0;
	else if(m<1 || m>12)
		flag=0;
	else if(d<1)
		flag=0;

	//check for total number of days in february and 29 when it ia a leap year
	else if(m==2)
	{
		if(d>28)
			flag=0;
		if(d>29 && isleap)
			flag=1;
	}
	//check for total nunber of days in months with 30 days
	else if(m==4 || m==6 || m==9 || m==11)
	{
		if (d>30)
			flag=0;
	}
	else if (d>31)
		flag=0;
	if (flag==0)
	{
		printf ("Date not valid\n");
	}
	else
	{
		printf("Valid Date entered");
	}
	return(0);
}
