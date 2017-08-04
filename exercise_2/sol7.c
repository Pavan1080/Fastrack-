#include<stdio.h>
#include<assert.h>
double sum(double x);
double main()
{
assert(sum(1)==(double)1.000000);
assert(sum(2)==(double)1.500000);
assert(sum(0)==(double)0.000000);


sum(5);
}
double sum(double x)
{
    double sum = 0;
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
       fact *= i;         
       sum += 1.0/fact;
    }printf("sum is %lf \n", sum);
    return sum;
}
 
