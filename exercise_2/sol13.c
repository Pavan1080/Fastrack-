#include<stdio.h>
#include<assert.h>
int fun(int );
int main()
{
assert(fun(2442) == 1);
assert(fun(2445) == 0);
int n;
printf("enter an interger\n");
scanf("%d",&n);
fun(n);
}


int fun (int original)
{
int rev=0,rem, n;
n=original;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n/=10;
}
if(original==rev)
{
printf("%dis a palindrome\n", original);
return 1;
}
else 
{
printf("%d is not a palindrome\n", original);
return 0;
}
}
