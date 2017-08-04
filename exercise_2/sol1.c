#include<stdio.h>
#include <assert.h>
int leap(int year);
int main ()
{
int y;
printf("enter a value\n");
scanf("%d",&y);
assert(leap (2000)==1);
assert(leap (3000)==1);
assert(leap (1999)==0);
assert(leap(y)==1);
}
int leap(int year)
{
if (year%4==0)
{
printf("the year is a leap year\n");
return 1;
}
else 

printf("the year is not a leap year\n");
return 0;

}


