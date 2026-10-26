#include<stdio.h>
int main()
{
int pin=1234;
int choice;int epin;
printf("enter your pin");
scanf("%d",&epin);
if(pin!=epin)
{
printf("incorrect pin");
return 0;}
printf("login successful");
printf("=====ATM application MENU=====\n");
printf("1>check balance\n");
printf("2>withdraw the amount\n");
printf("3>deposite the amount\n");
printf("4>exit\n");
return 0;
}
printf("Enter your choice:\n");
scanf("%d",&choice);
