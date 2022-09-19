 #include<stdio.h>
 int main()
 {
  int num,digit;
  printf("Enter any no: ");
  scanf("%d",&num);
  digit=num%10;
  num=num-digit;
  printf("%d",num);
  return 0;
 }
