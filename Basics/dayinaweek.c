#include<stdio.h>

int main()
{
int day;
char again;

do{
printf("Enter the day:");
scanf("%d", &day);

switch (day)
{
case 1:
printf("Sunday\n");
    break;

case 2:
printf("Monday\n");
    break;

case 3:
printf("Tuesday\n");
    break;

case 4:
printf("Wednesday\n");
    break;

case 5:
printf("Thursday\n");
    break;

case 6:
printf("Friday\n");
    break;

case 7:
printf("Saturday\n");
break;

default:
printf("Enter the number 1-7\n");
    break;
}

printf("Do you want to find any other day:\n [Y/N]");
scanf("%s", &again);
}
while(again=='Y');
}