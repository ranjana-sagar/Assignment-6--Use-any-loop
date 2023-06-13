#include<stdio.h>
#include<conio.h>
int main()
{
    int sum=0,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(;n;n--)
        sum+=n;
    printf("sum of first %d natural numbers is %d",n,sum);
    getch();
    return 0;    
}