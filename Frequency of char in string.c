#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[100],ch;
    int count = 0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    printf("Enter the character to find : ");
    scanf("%c",&ch);
    for(int i=0;str[i]!='\0';i++){
        if(str[i] == ch)
            count++;
    }
    printf("The caracter %c appears %d times.\n",ch,count);
    return 0;
}