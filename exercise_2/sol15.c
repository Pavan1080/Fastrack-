#include<stdio.h>
#include<assert.h>
int powernum(int x,int y);
int main()
{
 int n,p,result;
printf("enetr the no and raised to the power\n");
scanf("%d,%d", &n,&p);
assert(powernum(3,2)==9);
result = powernum(n,p);
printf("%d to power of %d is : %d\n", n,p,result);
return 0;
}

int powernum(int x, int y)
{
int i, res=1;
for(i=0;i<y;i++)
res=res*x;
return res;
}
