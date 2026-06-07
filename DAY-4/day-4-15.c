#include<stdio.h>
#include<math.h.>
int main()
{
    int n, temp, rem, sum=0, digits =0;
    printf("enter n:");
    scanf("%d",&n);
    temp =n;
    while(temp!=0)
    {
        digits++;
        temp= temp/10;

    }
    temp =n;
    while(temp!=0)
    {
        rem = temp%10;
        sum = sum + pow(rem, digits);
        temp = temp/10;
    }
    if(sum==n)
    printf("%d is an armstrong number",n);
else
printf("%d is not an armstrong number",n);
return 0;

}