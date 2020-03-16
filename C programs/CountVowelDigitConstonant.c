/*******Program to count vowels, digits, consonants and Special Characters in a Sentence *******/
#include<stdio.h>
#include<string.h>

main()
{
    int i, vowels = 0, Consonants = 0, digits = 0, special = 0;
    char str[100];
    printf("Enter a Sentence:\t");
    scanf("%s",str);

    for (i=0; i<=strlen(str); i++){
        if (str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            vowels++;
        }
        else if (str[i]>=0 && str[i]<=47 || str[i]>=58 && str[i]<=64 || str[i]>=91 && str[i]<=96 || str[i]>=123 && str[i]<=127){
            special++;
        }
        else if (str[i]>'0' && str[i]<'9'){
            digits++;
        }
    }
    printf("Vowels are %d\nConsonants are %d\nDigits are %d\nSpecial characters are %d\n",vowels, strlen(str)-vowels-digits-special, digits, special);

}
