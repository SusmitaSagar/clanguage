//prime no
#include<stdio.h>
void main()
{

    int num,result=0;
    printf("enter an integer:");
    scanf("%d",&num);
    for (int i = 2; i < num; i++)
      if (result == 1) {
        printf("%d is not a prime no",num);

    }
    if (result == 0){
        printf("%d is a prime no",num);
    }
    return 0;
}

