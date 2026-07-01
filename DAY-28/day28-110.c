#include<stdio.h>
int main(){
    float balance=5000,deposit,withdraw;
    int choice;
    printf("1.Deposit 2.Withdraw 3.Balance\n");
    scanf("%d",&choice);
    if(choice==1){
        scanf("%f",&deposit);
        balance+=deposit;
    }
    else if(choice==2){
        scanf("%f",&withdraw);
if(withdraw<=balance)
balance-=withdraw;
    }
    printf("Balance = %.2f",balance);
    return 0;
}