#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,sum=0,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum+=i*i;
    printf("Sum is %d",sum);
    getch();
    return 0;
}