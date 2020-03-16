#include<stdio.h>

int GetGcd(int num1, int num2){ // num1=3, num2=4
    if (num2 != 0)    //4!=0 , 2!=0, 0!=0<-false
        GetGcd(num2,num1%num2); //GetGcd(4,2), (2,1)
    else
        return(num1); // return(1)
}
main()
{

    int num1, num2, gcd, lcm, x;
    printf("Enter Number 1 and Number 2 :\t");
    scanf("%d%d",&num1,&num2);
    gcd = GetGcd(num1,num2);
    lcm = (num1*num2)/gcd;//(3*4)/1=12
    printf("\nGCD is %d\nLcm is %d\n",gcd,lcm);
}
