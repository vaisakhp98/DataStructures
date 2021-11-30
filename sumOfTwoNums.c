#include <stdio.h>

int main() {
   int sum,num1,num2;
   printf("enter the first number ");
   scanf("%d", &num1);
   printf("ente the second number ");
   scanf("%d",&num2);
   sum = num1 + num2;
   printf("the sum of two numbers of %d + %d = %d",num1,num2,sum);
   return(0);
   
}