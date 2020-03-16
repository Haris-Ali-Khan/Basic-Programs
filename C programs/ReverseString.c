#include<stdio.h>
#include<string.h>

main()
{
    char str1[100], str2[100] = {0};
    int i, j = 0;

    printf("Enter a String:\t");
    gets(str1);

    for (i=strlen(str1)-1; i>=0; i--){
        str2[j] = str1[i];
        j++;
    }
    str2[j] = '\0';
    printf("Reverse of \'%s\' is given --> %s",str1,str2);
}
