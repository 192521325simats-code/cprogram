#include<stdio.h>
int main()
{
    int totaldays,months,remainingdays;
    printf("total no of days:");
    scanf("%d",&totaldays);
    months=totaldays/30;
    remainingdays=totaldays%30;
    printf("months=%d\n",months);
    printf("remaining=%d",remainingdays);
    return 0;
}
