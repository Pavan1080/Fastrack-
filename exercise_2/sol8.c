#include<stdio.h>
#include<assert.h>
int function(int x);
int main()
{
int n, sum;
assert(function(1111)==4);
assert(function(111)==3);
assert(function(11)==2);
assert(function(1)==1);
printf("sum of digits of %d\n",function(1234));

}
int function(int x)
{
int sum=0,remainder;

while(x>0)
{
remainder=x%10;
sum=sum+remainder;
x=x/10;
}

return sum;
}

