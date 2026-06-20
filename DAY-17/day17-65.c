#include<stdio.h>
int main(){
    int n1,n2, i;
    printf("Enter size of first array:");
    scanf("%d",&n1);
    int arr[n1];
    printf("Enter elements of first array:");
    for(i=0; i<n1; i++)
    scanf("%d",&arr[i]);
printf("Enter size of second array:");
scanf("%d", &n2);
int arr[n2];
printf("Enter elements of second array:");
for(i=0; i<n2; i++)
scanf("%d",&arr[i]);
int merged[n1+n2];
for(i=0; i<n1; i++)
merged[i]=arr[i];
for(i=0; i<n2;i++)
merged[n1+i]=arr[i];
printf("Merged array:");
for(i=0; i<n1+n2; i++)
printf("%d",merged[i]);
return 0;
}