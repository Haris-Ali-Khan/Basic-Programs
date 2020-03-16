#include<stdio.h>

main()
{
    int a, b, i, multiply = 0;
    printf("Enter a & b\n");
    scanf("%d%d",&a,&b); // a=3,b=2

    if (b<0){// 2<0 :false
        a = a+b;
        b = a-b;
        a = a-b;
    }
    if (a>=0){ // 3>0 :true
        for (i=1; i<=a; i++) // i<=3; 3 times iterate
            multiply += b; // multiply=0+2, =2+2, =4+2= 6 answer
    }
    if (a<0){
        for (i=a; i<=-1; i++)
            multiply -= b;
    }
    printf("Multiplication=%d\n",multiply); // multiply=6
}
