#include <stdio.h>
#include <string.h>
int main(){
    char str1[100],str2[100];
    printf("enter first string:");
    scanf("%s",str1);
    printf("enter second string:");
    scanf("%s",str2);
    printf("common characters:");
    for(int i=0;str1[i] !='\0';i++){
        for(int j=0;str2[j] !='\0';j++)
 {
    if(str1[i]==str2[j]){
        printf("%C",str1[i]);
        break;

    }
}        
    }
    return 0;
}