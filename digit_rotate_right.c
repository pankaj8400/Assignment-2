#include<stdio.h>
int main()
{
    int x;
    printf("Enter a no: ");
    scanf("%d",&x);

    x=x%10*100+x/10;
    printf("The rotation of digit is right is : %d",x);

    return 0;
}
