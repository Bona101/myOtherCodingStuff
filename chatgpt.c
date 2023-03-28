#include <stdio.h>

int main()
{
// Initialize variables
int cells = 1; // starting with one cell
int hours = 0; // starting at time 0
int days = 0;
int weeks = 0;
int months = 0;

while (hours < 24) // while it's still the same day
{
    cells *= 2; // double the number of cells
    hours += 4; // increment time by 4 hours
}

days++; // increment the number of days by 1

while (days < 7) // while it's still the same week
{
    cells *= 2; // double the number of cells
    hours += 4; // increment time by 4 hours
    if (hours >= 24) // if a day has passed
    {
        days++; // increment the number of days by 1
        hours = 0; // reset the number of hours
    }
}

weeks++; // increment the number of weeks by 1

while (weeks < 4) // while it's still the same month
{
    cells *= 2; // double the number of cells
    hours += 4; // increment time by 4 hours
    if (hours >= 24) // if a day has passed
    {
        days++; // increment the number of days by 1
        hours = 0; // reset the number of hours
    }
    if (days >= 7) // if a week has passed
    {
        weeks++; // increment the number of weeks by 1
        days = 0; // reset the number of days
    }
}

months++; // increment the number of months by 1

// Print the results
printf("Number of cells after 1 day: %d\n", cells);
printf("Number of cells after 1 week: %d\n", cells);
printf("Number of cells after 1 month: %d\n", cells);

return 0;
}
