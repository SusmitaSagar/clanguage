// find reverse of a number using for loop
#include<stdio.h>
int main()
{

    int num,sum=0,lastdigit,i;
    printf("enter the value");
    scanf("%d",&num);
    for(i;num>0;i++)
    {
        lastdigit = num%10;
        sum=sum*10 + lastdigit;
        num/=10;
    }
    printf("no of digit is %d",sum);
    return 0;

}
