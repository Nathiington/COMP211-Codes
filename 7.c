#include<stdio.h>
void main()
{
    int count,n,out;
    printf("Input a number ");
    scanf("%d" , &n);
    printf("Your multiplication table is\n");      // multiplication table
    for(count=0;count<=15;count++)
    {
        out=n*count;
        printf("%d * %d =" , count,n);
        printf("%d\n" , out);
    }
}
