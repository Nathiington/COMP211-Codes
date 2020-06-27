#include<stdio.h>
void main()
{
    int n,nf,c ;
    printf("Input a number "); // factorial
    scanf("%d" , &n);
    nf=n-1;
    for(c=1;nf>=c;c++){
      n *= c;
    }
        printf("The factorial is %d" ,n);
}
