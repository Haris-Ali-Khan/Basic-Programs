/******Arrange Zeros to left Side and Ones to right side******/
#include<stdio.h>
#include<stdlib.h>

main()
{
    int i, size, j, zerosCnt = 0;
    printf("Enter Size of Array\n");
    scanf("%d",&size);

    int a[size];
    printf("Enter 1's and 0's only\n");
    for (i=0; i<size; i++){
        scanf("%d",&a[i]);
        if (!(a[i]==0 || a[i]==1)){
            printf("Please Enter either 0 or 1\n");
            exit(0);
        }
    }
    for (i=0; i<size; i++){
        if (a[i]==0)
            zerosCnt++;
    }
    for (i=0; i<size; i++){
        if (i<zerosCnt)
            a[i]=0;
        else
            a[i]=1;
    }
    for (i=0; i<size; i++){
        printf("%d",a[i]);
    }
    printf("\n");
}
