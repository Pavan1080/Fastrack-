#include <stdio.h>
#include <assert.h>
int fun(int,int,int);
void main()
{
int x,y,z;
assert(fun(1,1,2) == 1);
assert(fun(3,5,9) == 0);
printf("enter the series\n");
scanf("%d %d %d",&x,&y,&z);
fun(x, y, z);
}

int fun(int a,int b, int c)
{
int sum;
sum=a+b;
if(sum == c)
{
printf("the series is a fib\n");
return 1;
}
else
{
printf("the series is not a fib\n");
return 0;
}
}
