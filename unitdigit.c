#include<stdio.h>
int main()
{
 int num,temp;
 printf("Enter a number: ");
 scanf("%d",&num);
 temp=num%10;
 printf("unit digit is %d",temp);
 return 0;
}
