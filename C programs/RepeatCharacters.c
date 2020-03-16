/*********Frequency of each character in a Sentence*********/

#include<stdio.h>
#include<string.h>

main()
{
    int i, x, k = 0, count[26] = {0};
    char str[100];

    printf("Enter a Sentence\n");
    gets(str);

    while (str[k] != '\0'){
        if (str[k] >= 'a' && str[k] <= 'z'){
            x = str[k] - 'a';
            count[x]++;
        }
        if (str[k] >= 'A' && str[k] <= 'Z'){
            x = str[k] - 'A';
            count[x]++;
        }
        k++;
    }

    for (i=0; i<26; i++){
        if (count[i] != 0)
            printf("%c repeated %d times.\n",i+'a',count[i]);
    }
}
