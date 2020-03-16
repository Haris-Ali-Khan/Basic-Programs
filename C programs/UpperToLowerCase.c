/*******Convert a string of Upper Case to Lower Case as vice versa*******/

#include<stdio.h>
#include<string.h>

main()
{
    int i;
    char str1[100], str2[100] = {0};
    printf("Enter a Sentence without Space:\t");
    gets(str1);

    for (i=0; str1[i]!='\0'; i++){
        if (str1[i]>='a' && str1[i]<='z')
            str2[i] = (char)str1[i]-32;

        else if (str1[i]>='A' && str1[i]<='Z')
            str2[i] = (char)str1[i]+32;

        else
            str2[i] = str1[i];
    }

    printf("The Converted Sentence is %s\n",str2);
}
