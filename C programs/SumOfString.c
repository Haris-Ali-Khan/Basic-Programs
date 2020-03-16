#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main()
{
    int i, j = 0, temp, n, sum = 0;
    char str1[100], str2[100] = {0};

    printf("Enter a string:\t");
    gets(str1);

    for (i=0; i<strlen(str1); i++){
        if (str1[i]>='0' && str1[i]<='9'){
            str2[j] = str1[i];
            j++;
        }
    }

    temp = atoi(str2); //convert string to integer
    printf("The Digit present in a string is %d\n",temp);
    while(temp > 0){
        n = temp%10;
        sum += n;
        temp = temp/10;
    }
    printf("The Sum of Digits is %d\n",sum);
}
