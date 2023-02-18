#include<stdio.h>


int main()
{
    int a, b;
    printf("\nEnter First number: ");
    scanf("%d",&a);
    printf("\nEnter Second number: ");
    scanf("%d",&b);
    printf("\nNumbers before swapping: %d , %d", a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nNumbers after swapping: %d , %d\n", a,b);
    return 0;
}

