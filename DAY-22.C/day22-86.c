#include<stdio.h>
int main(){
    char str[200];
    int words=1,i;
    printf("Enter a sentence");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' ')
        words++;
    }
    printf("number of words=%d",words);
    return 0;
}