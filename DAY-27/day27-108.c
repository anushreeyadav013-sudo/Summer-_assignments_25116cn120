#include <stdio.h>
int main(){
    int n,i,m1,m2,m3;
    float avg;
    printf(" enter number of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nenter 3subjects marks:");
        scanf("%d %d %d",&m1,&m2,&m3);
        avg=(m1+m2+m3)/3.0;
        printf("average=%.2f\n",avg);
    }
    return 0;
}