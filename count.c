// count the number of digits
#include<stdio.h>
int main()
{

    int num,count;
    printf("the number is ");
    scanf("%d",&num);
    count=0;
    while(num>0)
    {
        num/=10;
        count++;
    }
    printf("the no of digits are %d",count);
    return 0;
}
