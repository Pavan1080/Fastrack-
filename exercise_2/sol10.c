#include<stdio.h>
#include<assert.h>
#include<string.h>

char fun (char );
void main()
{
char character;
assert(fun('a') == 1);
assert(fun('B') == 0);
printf("enter the alphabet\n");
scanf("%c",&character);
fun(character);
}
char fun( char ch)
{
if('a'<=ch && ch<='z')
{
printf("upper case of %c is %c\n", ch,ch-32);
return 1;
}
else if ('A'<=ch && ch<='Z')
{
printf("lower case of %c is %c\n",ch,ch+32);
return 0;
}
}


