/****This program will find out Capital letters in a string ****/
#include<stdio.h>
#include<string.h>

main()
{
    int i;
    char str1[100], c;//str2[100];

    printf("Enter a String:\t");
    gets(str1);

    for (i=0; i<strlen(str1); i++){
            //for (int j=i; j<strlen(str1); j++){
                if (str1[i] >= 'A' && str1[i] <= 'Z'){
                       // str2[j] = str1[i];
                       c = str1[i];
                       break;
                }
                else
                {
                    continue;
                }
            //}
    }

   // printf("Capital letters in %s are given %s",str1, str2);
   printf("First Capital letter is %c\n",c);
}
