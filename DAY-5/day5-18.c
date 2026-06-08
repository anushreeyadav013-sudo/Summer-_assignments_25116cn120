#include<stdio.h>
int main()
{
    int n, temp, rem,sum=0, fact;
    printf("Enter number:");
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        rem=temp%10;
        fact=1;
        for(int i=1; i<=rem; i++)
            fact *=i;
        sum+=fact;
        temp/=10;
    }
    if(sum==n)
    printf("strong number");
else
printf("not strong number");
return 0;
}