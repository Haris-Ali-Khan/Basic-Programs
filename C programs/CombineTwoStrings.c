#include<stdio.h>
#include<string.h>

main()
{
    int i, j = 0, len;
    char str1[100], str2[100];

    printf("Enter String 1:\t");
    gets(str1);
    printf("Enter String 2:\t");
    gets(str2);

    len = strlen(str1);
    str1[len] = ' ';
    i = len + 1;

    for (j=0; str2[j]!='\0'; j++, i++){
        str1[i] = str2[j];
    }
    str1[i] = '\0';
    printf("%s\n",str1);
}
