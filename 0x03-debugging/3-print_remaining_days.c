#include+$\e"main.h"
/**+$\e
*+$\eprint_remaining_days - takes a date and prints how many days are 
*+$\eleft in the year, taking leap years into account 
*
*+$\e@month: month in number format
*+$\e@day: day of month
*+$\e@year: year
*/

void+$\eprint_remaining_days(int month, int day, int year)
{
/**
*+$\eleap year when it can be divided
*+$\eby 100 and 400 or by 4 evenly
*/
if+$\e((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
{
if+$\e(month > 2 && day >= 60)
{
day++;
}

printf("Day+$\eof the year: %d\n", day);
printf("Remaining+$\edays: %d\n", 366 - day);

}
else
{
if+$\e(month == 2 && day == 60)
{
printf("Invalid+$\edate: %02d/%02d/%04d\n", month, day - 31, year);
}
else
{
printf("Day+$\eof the year: %d\n", day);
printf("Remaining+$\edays: %d\n", 365 - day);
}
}
}
