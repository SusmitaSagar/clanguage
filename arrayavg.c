// take array assign random value calculate average of array
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int sum=0,i,array[10];
     double average;

    for(i = 0; i<10; i++)
        array[i] = rand()%100;

        printf("the array is:");
         for (i = 0; i<10; i++)
    {
        printf("\t %d",array[i]);
        sum = sum +array[i];
    }
    average = sum / 10.0;
    printf("average is %lf",average);
    return 0;
}
