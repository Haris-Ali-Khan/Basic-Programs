#include<stdio.h>

main()
{
    char s[100];
    int i, count = 0;
    printf("Enter a String Without Space:\t");
    scanf("%s",&s);
    for(i=0; s[i]!='\0'; i++){
        if (s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            count++;
    }
    if (count==0)
        printf("No vowels are there\n");
    else
        printf("Number of Vowels in %s is %d\n",s,count);
}
