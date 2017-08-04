#include<stdio.h>
#include<assert.h>
double plane(float a,float b,float c );
double main()
{
assert(plane(500,5000,2.95)==1);
assert(plane(1000,500,2.95)==0);
plane(800,100000,2.95);
}
double plane(float a,float b, float c)
{
float d, e;
d=a*0.2777778;
e=(d*d)/(2*c);
if(e<b)
{printf("plane will land safely \n");
return 1;
}
else 
{printf("plane will crash \n");
return 0;}
}
