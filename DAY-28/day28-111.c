#include<stdio.h>
int main(){
    int seats=10,book;
    printf("Enter seats to book:");
    scanf("%d",&book);
    if(book<=seats){
        seats-=book;
        printf("Booked successfully");
    }else{
        printf("Not enough seats");
    }
    return 0;
}