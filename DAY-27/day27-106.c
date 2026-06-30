#include <stdio.h>
struct employee{
    int id;
    char name[50];
    float salary;
};
int main(){
    struct employee e[50];
    int n,i;
    printf("enter number of employees:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %s %f",&e[i].id,e[i].name,&e[i].salary);
    }
    printf("\nemployee data:\n");
    for(i=0;i<n;i++){
        printf("%d %s %.2f\n",e[i].id,e[i].name,e[i].salary);
    }
    return 0;
}