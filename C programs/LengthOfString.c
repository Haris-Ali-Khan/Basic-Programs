#include<stdio.h>

main()
{
    char s[100];
    int i, lenth;
    printf("Enter a string without Space:\t");
    scanf("%s",&s);
    for (i=0; s[i]!='\0'; i++)
        lenth++;

    printf("\nThe Length of %s is %d",s,lenth);
}
