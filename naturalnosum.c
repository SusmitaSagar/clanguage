// sum of first n natural no
#include<stdio.h>
int main()
{

    int num1,num2=1,sum=0;
    printf("enter an integer;");
    scanf("%d",&num1);
    while (num2<=num1)
    {
        sum+=num2;
        num2++;
    }
    printf("sum of first %d natural number is %d",num1,sum);
    return 0;
}
