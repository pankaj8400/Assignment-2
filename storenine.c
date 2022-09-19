#include<stdio.h>
int main()
{
  int num,digit;
  printf("Enter any no: ");
  scanf("%d",&num);
  num=num*10;
  num=num+9;
  printf("%d",num);
  return 0;
}
