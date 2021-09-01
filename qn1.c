//swap of numbers

#include<stdio.h>
int main()
{
 int num1, num2, swap;
 printf("enter two no");
 scanf("%d%d",&num1,&num2);

 swap = num1;
 num1 = num2;
 num2 = swap;

 printf("after swaping the first no is  %d and second is %d",num1,num2);
 return 0;

}
