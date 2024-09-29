#include<stdio.h>
int main(void)
{
    int a;
    printf("Enter the number of month: ");
    scanf("%d",&a);
    if(a>0&&a<=12)
    {
        printf("Telling the numeber of days in the month you chose\n");
    }
    else
    {
        printf("Invalid month number\n");
    }

    switch (a)
    {
    case 1:
    printf("Number of days: 31");// Jan
    break;
    case 2:
    printf("Number of days: 28");//Feb
    break;
    case 3:
    printf("Number of days: 31");//March
    case 4:
    printf("Number of days: 30");//April
    break;
    case 5:
    printf("Number of days: 31");//May
    break;
    case 6:
    printf("Number of days: 30");//June
    break;
    case 7:
    printf("Number of days: 31");//July
    break;
    case 8:
    printf("Number of days: 31");//August
    break;
    case 9:
    printf("Number of days: 30");//September
    break;
    case 10:
    printf("Number of days: 31");//Oct
    break;
    case 11:
    printf("Number of days: 30");//Nov
    break;
    default:
    printf("Number of days: 31");//Dec
    break;
    
    }
    
}