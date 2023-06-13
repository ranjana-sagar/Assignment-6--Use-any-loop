#include<stdio.h>
#include<conio.h>
int main()
{
    int i=2,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
            break;
    }
    printf(i==n/2?"prime number":"not prime number");
    getch();
    return 0;
}