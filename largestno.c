//find which no is largest among the three values
#include<stdio.h>
int main()
{

    int num1,num2,num3;
    printf("enter the three no");

    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3)
    {
        printf("largest no is num1");
    }
    else
       if(num2>num3 && num2>num1)
            printf("largest no is num2");
       else
        printf("largest no is num3");
    return 0;
}
