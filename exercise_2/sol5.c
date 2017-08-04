#include<stdio.h>
#include<assert.h>
double car(float a,float b );
double main()
{
assert(car(22,4)==0);
assert(car(23,22)==1);
car(40,5);
}
double car(float a,float b)
{
float d;
d=a*0.2777778;
if(d<b)
{printf("car wont hit the truck \n");
return 1;
}
else 
{printf("car will hit the truck \n");
return 0;}
}
