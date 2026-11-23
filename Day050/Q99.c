// Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>

int main()
{
    int day, month, year;

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("%02d-", day);

    if (month == 1)
        printf("Jan");
    else if (month == 2)
        printf("Feb");
    else if (month == 3)
        printf("Mar");
    else if (month == 4)
        printf("Apr");
    else if (month == 5)
        printf("May");
    else if (month == 6)
        printf("Jun");
    else if (month == 7)
        printf("Jul");
    else if (month == 8)
        printf("Aug");
    else if (month == 9)
        printf("Sep");
    else if (month == 10)
        printf("Oct");
    else if (month == 11)
        printf("Nov");
    else if (month == 12)
        printf("Dec");
    else
    {
        printf("Invalid month");
        return 0;
    }

    printf("-%04d", year);

    return 0;
}