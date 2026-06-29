#include<stdio.h>
int main(){
    int ans,score=0;
    printf("Q1.Capital of India?\n");
    printf("1.Delhi 2.Mumbai 3.kolkata\n");
    scanf("%d",&ans);
    if(ans==1)
    score++;
printf("Q2.2+2=7?\n");
printf("1.3 2.4 3.5\n");
scanf("%d",&ans);
if(ans==2)
score++;
printf("Final score =%d/2",score);
return 0;
}