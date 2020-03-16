/******* Ceaser Cipher Code to encrypt & decrypt a message *****
still in progress........

#include<stdio.h>
#include<string.h>

main()
{
    char ch[100] = {'a','b','c','d','e','f'};
    char str[100], newstr[100];
    int dec, i, j, newpos, key = 3;

    printf("Enter a String without a Space:\t");
    scanf("%s",&str);
    printf("Enter 1 to Encrypt and 2 to Decrypt\t");
    scanf("%d",&dec);

    if (dec==1){
        for (i=0; str[i]!='\0'; i++){
            for (j=0; ch[j]!='\0'; j++){
                if (!(str[i]!=ch[j])){
                    newpos = (ch[j]+key)%26;
                    newstr[j] = newstr[newpos];
                    printf("%d",newstr);
                }
            }
        }
    } else
        return 1;

}
