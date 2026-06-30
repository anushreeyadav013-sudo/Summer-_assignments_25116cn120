#include <stdio.h>
int main(){
    int n, i;
    float basic, da, hra, total;
    printf("enter number of employees:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nenter basic salary:");
        scanf("%f",&basic);
        da=0.4*basic;
        hra=0.2*basic;
        total=basic+da+hra;
        printf("total salary=%.2f\n",total);
    }
    return 0;
}