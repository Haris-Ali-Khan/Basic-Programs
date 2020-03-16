/******Sum of positive and negative numbers in array******/
#include<stdio.h>

main()
{
    int i, pos = 0, neg = 0;
    int size;

    printf("Enter array size\t");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements:\n");
    for (i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    for (i=0; i<size; i++){
        if (arr[i]>0)
            pos+=arr[i];
        if (arr[i]<0)
            neg+=arr[i];
    }

    printf("sum of Positive numbers = %d\nsum of Negative numbers = %d\n",pos,neg);
}
