#include<stdio.h>
#include<assert.h>
int fun(int );
void main()
{
int num,deci; 
assert(fun(1)==1);
assert(fun(11)==3);
printf("enter a binary number\n");
scanf("%d",&num);
deci=fun(num);
printf("the decimal number is %d\n",deci);
}

int fun(int bin_val)
{ 
int num,base=1,rem,deci_val=0;
num=bin_val;
while(num>0)
{
rem=num%10;
deci_val=deci_val+rem*base;
num=num/10;
base=base*2;
}
return deci_val ;

}
