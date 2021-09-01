//reverse of a string using strrev fun
#include<stdio.h>
#include<string.h>

int main()
{
    char word[10];

    printf("enter a word");
    scanf("%s",word);
    printf("reverse string is %s",strrev(word));
    return 0;
}
