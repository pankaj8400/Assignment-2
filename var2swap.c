#include<Stdio.h>
int main()
{
 int a=50,b=30;
 printf("Before swapping a=%d, b=%d",a,b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("\nAfter swapping a=%d, b=%d",a,b);
 return 0;
}
