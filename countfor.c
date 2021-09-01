//count the no of digit in a number
#include<stdio.h>
int main()
{

    int num,count=0;
    printf("enetr a number");
    scanf("%d",&num);
    for(count; num>0; count++)
    {
        num/=10;
    }
    printf("there are %d  digits",count);
    return 0;
}

