/*******give an array of an integer in which two elements appear exactly once
 and all other elements appear exactly twice.find the two elements that appear
 only one. for example
 input--> 1 3 5 7 9 1 5 9
 output--> 3 7

#include<stdio.h>

main()
{
    int array[] = {1,3,5,7,9,1,5,9};
    int i, result = 0;
    int numb = sizeof(array) / sizeof(array[0]);
    printf("Element appear exactly once is ");

    for (i=1; i<numb; i++){
        result = result ^ array[i];
        printf("%d",result)
    }
}
