#include<stdio.h>
int main()
{
    int n,i,j,sum;
    printf("Enter size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:");
    for(i=0; i<n; i++)
    scanf("%d",&arr[i]);
printf("Enter required sum:");
scanf("%d",&sum);
for(i=0; i<n; i++){
    for(j=1+i; j<n; j++){
        if(arr[i] + arr[j] == sum){
            printf("Pair found: %d %d", arr[i], arr[j]);
        }
    }
}
return 0;
}