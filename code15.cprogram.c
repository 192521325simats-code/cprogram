#include<stdio.h>
int main()
{
    int num1,num2,remainder,quiotent;
    printf("enter a number:");
    scanf("%d",&num1);
    printf("enter a number:");
    scanf("%d",&num2);
    quiotent=num1/num2;
    remainder=num1%num2;
    printf("quiotent of 2 integer=%d\n",quiotent);
    printf("remainder of 2 integer=%d",remainder);
    return 0;
}
