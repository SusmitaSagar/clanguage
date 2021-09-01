//even or odd after dividing it from 2
#include<stdio.h>
int main()
{
    int value;
    printf("enter the no.");
    scanf("%d",&value);
    if(value%2==0)
    {
        printf("the no is even");
    }
    else
        printf("the no is odd");
    return 0;
}
