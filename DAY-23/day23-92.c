#include<stdio.h>
int main(){
    char str[100];
    int freq[256]={0};
    char maxChar;
    int max;
    printf("Enter string");
    fgets(str,sizeof(str),stdin);
    for(int i=0; str[i]!='\0';i++)
    freq[(unsigned char)str[i]]++;
    for(int i=0; i<256; i++){
        if(freq[i]>max){
            max=freq[i];
            maxChar=i;
        }
    }
    printf("Maximum occuring character:%c",maxChar);
    return 0;
}