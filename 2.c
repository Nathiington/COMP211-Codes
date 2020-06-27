#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Input number for a\n");
    scanf("%d" , &a);
    printf("Input number for b\n");
    scanf("%d" , &b);
    printf("Input number for c\n");
    scanf("%d" , &c);
    if(a>b && a>c)
    {
        printf("a is the greatest");
    }
    else if (b>c)
        {
        printf("b is the greatest");
        }
    else
        {
        printf("c is the greatest");
        }
return 0;
}
