#include <stdio.h>
#include<assert.h>
float km (float x);
int main()
{
float x,y;
printf("enter the value\n");
scanf("%f",&x);
km(x);
assert(km(0.02)==0.05);
assert(km(0.01)==0.1);
}
float km(float x)
{
float y;
y=1/(1000*x);
printf("the converted value is %f\n",y);
return y;
}


