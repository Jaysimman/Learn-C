#include<stdio.h>
int main(){
    int a;
    int b;
    int c = 4;
    /* BITWISE OPERATOR
    ! bit value is based on int,double int,float based on data types.
    let us assume a=4 b= 2
    binary value of 4 is 100
    binary value of 2 is 010

    Bitwise AND is 0
    Bitwise OR is 110 which means value is 6
    Bitwise XOR is 110 which means value is 6

    Leftshift Operator
    let us assume another value c = 4
    binary value of c is 0100 its denotion is c<<1 here 1 denotes position to change
    finally it changes from 0100 to 1000 which value is 8

    Right shift is quite opposite to this
    */
    
    printf("Enter Your 1st Number : ");
    scanf("%d",&a);
    printf("Enter Your 1st Number : ");
    scanf("%d",&b);
    printf("The bitwise AND operator : %d ",a&b);
    printf("\nThe bitwise OR operator : %d ",a|b);
    printf("\nThe bitwise XOR Operator : %d ",a^b);
    printf("\nLeftshift operator is : %d",c<<1);
    printf("\nRightshift operator is : %d",c>>1);

}

// 128    64    32    16    8    4    2   1
// 0       0      0    0    0    0    1   0