#include <stdio.h>
#include <stdlib.h>

int get_1st_weekday(int year)
{
	int d;
	d = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
	return d;
}
int main ()
{
	int year, month, days, daysInMonth, weekDay=0, startingDay;
	printf ("Enter desired year :");
	scanf ("%d", &year);
	//create an array that prints month of January to December
	char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	
	//create an array of total number of days in each month
	int monthDays[] = {31, 28, 31,30,31,30,31,31,30,31,30,31};
	
	if((year%4==0 && year%100!=0) || year%400==0)
		monthDays[1] = 29;
	//iterate and print months from January to December
	startingDay=get_1st_weekday(year);
	for (month=0; month<12; month++)
	{
		daysInMonth=monthDays[month];
		printf("\n\n-----------------%s---------------\n", months[month]);
	printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");

	//iterate and print total numbers of days  in each month
	for (weekDay=0; weekDay<startingDay; weekDay++)
		printf("     ");
	for (days=1; days<=daysInMonth; days++)
	{
		printf("%5d",days);
	
		if (++weekDay>6)
		{
			printf ("\n");
		weekDay=0;
		}
			startingDay=weekDay;
	}

	}
}
