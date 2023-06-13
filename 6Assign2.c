#include<stdio.h>
#include<conio.h>
int main()
{
    int sum=0,n;
    printf("Enter the number:");
    scanf("%d",&n); 
    for(;n;n--)
        sum+=n*2;
    printf("Sum of first %d even numbers is %d",n,sum);
    getch();
    return 0;   
}