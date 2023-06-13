#include<stdio.h>
#include<conio.h>
int main()
{
    int c=0,n,x;
    printf("Enter a number:");
    scanf("%d",&n);
    x=n;
    for(;n;c++)
        n/=10;
    printf("total  digit in this numbers %d is %d",x,c);    
    getch();
    return 0;
}
