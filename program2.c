#include<stdio.h>

int main()
{
    char word;
    printf("Enter a word:");
    scanf("%c",&word);
    if(word=='z'||word=='Z'||word=='o'||word=='O')
       {

            printf("yes");
       }
    else
        printf("No");

    return 0;
}
