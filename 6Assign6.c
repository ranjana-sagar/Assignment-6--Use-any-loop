#include<stdio.h>
#include<conio.h>
int main()
{
    double fact=1,n;
    printf("Enter the number:");
    scanf("%lf",&n);
    if(n==0)
      printf("Factorial is %lf",fact);
    else
    {
        for(;n;n--)
           fact*=n;
        printf("Factorial is %2.lf",fact);   
    }   
    getch();
    return 0;
}