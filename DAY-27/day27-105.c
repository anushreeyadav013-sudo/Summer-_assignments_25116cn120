#include <stdio.h>
struct student{
    int roll;
    char name[50];
    int marks;
};
int main(){
    struct students s[50]
    int n, i;
    printf("enter number of students:");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("\nenter roll,name, marks:");
        scanf("%d %s %d", &s[i].roll,s[i].name,&s[i].marks);
    }
    printf("\nstudent records:\n");
    for(i=0;i<n;i++){
        printf("%d %s %d\n",s[i].roll,s[i].name,s[i].marks);
    }
    return 0;
}