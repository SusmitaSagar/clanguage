// a calculator
#include<stdio.h>
int main()
{

    float num1,num2,result;
    char operation;
    printf("please select one operation '+' '-' '*' '/'");
    printf("enter the operation");
    scanf("%c",&operation);
    printf("\n enter first and seconf no");
    scanf("%f%f",&num1,&num2);

      switch (operation)
      {
      case '+':
        result = num1+num2;
        printf("the sum of %f and %f is %f",num1,num2,result);
        break;

        case '-':
        result = num1-num2;
        printf("the difference of %f and %f is %f",num1,num2,result);
        break;

        case '*':
        result = num1*num2;
        printf("the multiplication of %f and %f is %f",num1,num2,result);
        break;
        case '/':
        result = num1/num2;
        printf("the division of %f and %f is %f",num1,num2,result);
        break;
      }
      return 0;
}
