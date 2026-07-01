#include<stdio.h>
struct Contact{
    char name[50];
    long long phone;
};
int main(){
    struct Contact c[50];
    int n, i;
    printf("Enter number of contacts:");
    scanf("%d",&n);
    for(i=0;i<n; i++){
        scanf("%s %lld",c[i].name,&c[i].phone);
    }
    for(i=0;i<n;i++){
        printf("%s %lld\n",c[i].name,c[i].phone);
    }
    return 0;
}