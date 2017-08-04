#include <stdio.h>
#include <assert.h>
double convert(double x, double y);
void main()
{
double x,y;
double mn;
mn=convert(5,10);
printf("%lf\n", mn);
assert(convert(10,20)== 200);
assert(convert(20,10)==200);
assert(convert(2,6)==12);


}


double convert(double x, double y)
{
double lumen;
printf("the input is %lf,%lf \n", x,y );
lumen= (x*y);
printf("the value is %lf\n", lumen);
return lumen;
}

