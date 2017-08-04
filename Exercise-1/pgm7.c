#include<stdio.h>
void main() 
{
   int i, count = 0;
    int num;
 
   printf("Enter the number:\n");
   scanf("%d", &num);
 
   printf("Decimal number in binary format :\n");
   void printBinary(int num);
 
   while (num != 0) 
     {
      if (num & 1 == 1)
       {
         break;
       } 
       else 
       {
         count++;
         num = num >> 1;
      }
   }
   
   printf("\nTrailing Zeros : %d\n", count);
   
}
 void printBinary(int num)
{
   int mask = 0x4000;
   if ((num & 0x8000) == 0)
      printf("0");
   else
      printf("1");
   while (mask != 0) 
{
      if ((num & mask) == 0)
         printf("0");
      else
         printf("1");
      mask = mask >> 1;

   }
}

