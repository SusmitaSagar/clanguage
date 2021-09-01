//check it is vowel or consonent
#include<stdio.h>
int main()
{

    char character;
    printf("enter any character of alphapet");
    scanf("%c",&character);
    switch(character){
case 'A':
    case'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("%cis a vowel",character);
    break;
    default:
        printf("%c is a consonant",character);

    }

return 0;
}
