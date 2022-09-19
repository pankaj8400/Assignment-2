#include<stdio.h>
int main()
{
 int x;
 printf("enter a no: ");
 scanf("%d",&x);
 int result =x&1;

 if(result==1)
    printf("odd");
  else
    printf("even");

 return 0;
}
