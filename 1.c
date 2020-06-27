#include<stdio.h>
int main()

{
    int length ;
    int width ;
    int area,perimeter;
    printf("Enter the length ");
    scanf("%d" , &length);
    printf("Enter the width ");
    scanf("%d" , &width);
    area = length*width ;
    perimeter = 2*(length + width);
    printf("The perimeter is %d\n",perimeter);
    printf("The area is %d\n",area);
     return 0;
}
