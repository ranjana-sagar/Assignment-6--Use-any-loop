#include<stdio.h>
#include<conio.h>
int main()
{
    int n,x=0;
    printf("Enter an number:");
    scanf("%d",&n);
    for(;n;)
    {
        x=x*10+n%10;
        n/=10;
    }
    printf("Reverse number is %d",x);
    getch();
    return 0;
}