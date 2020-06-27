#include<stdio.h>
int main()
{
    int mark;
    printf("Input a mark\n");
    scanf("%d\n" , &mark);
    switch (mark)
    {
    case mark <= 35:
    printf("fail");
    break;
    case 90:
    printf("Nine");
    break;
    case 80:
    printf("ate");
    break;
    default :
         printf("default");
}
return 0;
}
