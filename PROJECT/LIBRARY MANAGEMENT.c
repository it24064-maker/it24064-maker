#include<stdio.h>
#include"registeration.c"
#include"issue.c"
#include"returning.c"
#include"addnew.c"
extern void registeration();
extern void issue();
extern void returning();
extern void addnew();


void main()
{
int select;
do{
printf("SELECT YOUR OPTION\n");
printf("press 1 for new resistration of students\n");
printf("press 2 for issue books\n");
printf("press 3 for returning books\n");
printf("press 4 for add new books\n");
printf("press 0 for exit from program\n");
scanf("%d",&select);
switch(select)
{
case 1:
registeration();
printf("\n\n\n");
break;
case 2:
issue();
printf("\n\n\n");
break;
case 3:
returning();
printf("\n\n\n");
break;
case 4:
addnew();
printf("\n\n\n");
break;
default:
    printf("please enter a valid optin\n");
    break;
}

}
while(select!=0);
    printf("You are exit from program");




















}
