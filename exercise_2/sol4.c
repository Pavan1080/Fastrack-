#include <stdio.h>
#include <assert.h>
double convert(double );
void main()
{
double x;
double mn;
mn=convert(5);
printf("%lf\n", mn);
//assert(convert((double)10.0)== 27.778);
assert(convert(0.5)==0.138889);
//assert(convert(2)==0.5555556);


}


double convert(double y)
{
double value;
printf("the input is %lf\n", y);
value= (y*0.277778);
printf("the value is %lf\n", value);
return value;
}

