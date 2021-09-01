//print identity matrix
#include<stdio.h>
int main()
{
    int size,i,j;
    printf("enter the size of matrix");
    scanf("%d",&size);
    for (i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            if (i==j)
            {
                printf(" 1");
            }
            else{
                printf(" 0");
            }
        }
        printf("\n");
    }
    return 0;
}
