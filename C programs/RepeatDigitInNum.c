/******Check for repeated digits in Number******/
#include<stdio.h>
#define Size 11
main()
{
    int num, k, temp, arr[Size], i;
    int flag = 0;

    printf("Enter Numbers\n");
    scanf("%d",&num);
    temp = num;

    //setting all Digits as zero
    for (i=0; i<Size; i++){
        arr[i] = 0;
    }
    while (num>0){
        k = num%10;
        arr[k]++;
        num = num/10;
    }
    for (i=0; i<Size; i++){
        if (arr[i]>1){
            flag = 1;
            printf("%d repeated %d times\n",i,arr[i]);
        }
    }

    if (flag==0)
        printf("No repeated Digits\n");
    else
        printf("Repeated Digits are there");
}
