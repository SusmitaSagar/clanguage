//delete a number in array from given position
#include <stdio.h>
#include <stdlib.h>
int main()
{

    int arr[10],max_num=10,position,i;
    srand(time(0));
    for (i=0;i<max_num;i++)
    {

        arr[i] = rand()%50;
    }
    printf("random array");
    for(i=0;i<max_num;i++)
    {
        printf("%d ",arr[i]);

    }
    printf("\nenter the position on the number you want to delete");
    scanf("%d",&position);

    for(i=position-1;i<max_num;i++)
    {
        arr[i] = arr[i+1];
    }
    printf("\n present array");
    max_num--;
    for(i=0;i<max_num;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

