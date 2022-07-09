#include<stdio.h>
int main()
{
     int dd,mm,yyyy;
     printf("Enter the today's date in DD\\MM\\YYYY format: ");
     scanf("%d%d%d",&dd,&mm,&yyyy);
     printf("Day-%d, Month-%d, Year-%d",dd,mm,yyyy);
     return 0;
}