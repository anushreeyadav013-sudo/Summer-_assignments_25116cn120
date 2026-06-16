#include<stdio.h>
int main()
{
    int a[10],n,i;
    printf("Enter size:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
printf("array elements:");
for(i=0; i<n; i++)
printf("%d",a[i]);
return 0;
}