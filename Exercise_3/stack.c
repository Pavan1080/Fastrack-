#include<stdio.h>
#define MAX 5
int stack[10];
int top=-1,ch;
int main()
{
printf("Stack operations\n");
do
{
printf("1---Push\n");
printf("2---Pop\n");
printf("3---Dispaly\n");
printf("4---Exit\n");
printf("Enter ur choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:push();   break;
case 2:pop();    break;
case 3:disp();   break;
case 4:return;
}
}while(ch!=4);


return 0;
}

push()
{
int num;
if(top==(MAX-1))
{
printf("Stack is full\n");
return;
}
else
{
printf("Enter the elements to be inserted\n");
scanf("%d",&num);
top=top+1;
stack[top]=num;
return;
}

}
pop()
{
int num;
if(top==-1)
{
printf("Stack is empty\n");
}
else
{
num=stack[top];
printf("The poped element is %d",num);
top=top-1;
}
return(num);
}

disp()
{
int i;
if(top==-1)
{
printf("Stack is empty\n");
return;
}
else
{
printf("The status of stack is \n");
for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}

printf("\n");
}
}
