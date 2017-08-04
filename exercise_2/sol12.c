#include<stdio.h>
#include<assert.h>
int fun(int );
void main()
{
int num;
long decimal_num,bin;
assert(fun(6)==110);
assert(fun(7)==111);
printf("enter the decimal number\n");
scanf("%d",&num);
bin=fun(num);
printf("the binary no is %ld", bin);
}

int fun(int num)
{
 long remainder, decimal_num,base=1,binary=0;
decimal_num = num;
while(num>0)
{
remainder=num%2;
binary=binary+remainder*base;
num=num/2;
base=base*10;
}
return binary;
//printf("input no is %ld\n",decimal_num);
//printf("the binary no is %ld\n",binary);
}

