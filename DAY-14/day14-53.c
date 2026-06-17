#include<stdio.h>
int main()
{
    int a[10],n,i,key,found=0;
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
printf("Enter element to search:");
scanf("%d",&key);
for(i=0;i<n;i++){
    if(a[i]==key){
        printf("found at position %d",i+1);
        found=1;
        break;
    }
}
if(!found)
printf("not found");
return 0;
}