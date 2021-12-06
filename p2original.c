#include<stdio.h>
int add(int  , int );
void main()
{
  int x , y;
printf("enter the value of two numbers");
scanf("%d %d" ,&x , &y);
printf("%d+%d=%d", x,y,add(x,y));
}

int add(int a, int b)
{
int result;
result =a+b;
return result;
}

