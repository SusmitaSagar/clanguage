// print  the factors of the number
#include<stdio.h>
int main()
{
    int num,i;
    printf("enter a positive integer");
    scanf("%d",&num);
    printf("the factors are",num);
    for(i=1; i<=num;i++){
            if (num%i==0)
        {
        printf("%d,",i);
       }
    }
    return 0;
}
