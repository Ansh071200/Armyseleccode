#include<stdio.h>
int main(){
int age,height;
int pullupct,pushupct,distrun,score;
printf("Enter the Age");
scanf("%d",&Age);
printf("Enter the Height in cms");
scanf("%d",&Height);
if(age>=18&&Height>157){
printf("Enter the Pushups Count");
scanf("%d",&pushupct);
printf("Enter the Pullups Count");
scanf("%d",&pullupct);
printf("Enter the run distance in kms");
scanf("%d",&distrun);
score=pullupct*pullupct/distrun;
if(score>=80){
printf("Good Job ! !\n You're Selected")}
else{
printf("You Failed the Physical Test\n Better Luck Next Time")}
}
else{
printf("You Failed the mandatory criteria to qualify for the test\n Better Luck Next Time")


	