/******Minumum & Maximum element in array******/
#include<stdio.h>

main()
{
    int i, min = 0, max = 0, size;

    printf("Enter the Size of Array\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter Array elements:\n");
    for (i=0; i<size; i++){
        scanf("%d",&a[i]);
    }
    min = a[0];
    max = a[0];

    for (i=0; i<size; i++){
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }

    printf("In Array Maximum Number is: %d\n& Minimum Number is:%d\n",max,min);
}
