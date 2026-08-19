#include<stdio.h>
int main()
{
    int choice, tokens, total;
    printf("\n***************************************************");
    printf("\n****************************************************");
    printf("\n\n      WELL COME TO MANNA HALL FOOD CORNER\n\n");
    printf("Availabe foods:\n");
    printf("1.Tea-5tk\n2.Rice-10tk\n3.Fish-30tk\n4.Chiken-40tk\n5.Beef-80tk\n");
    printf("What you want to eat:\n");
    scanf("%d",&choice);
    if(choice>5)
    {


    printf("Rong number\n");
    return 1;
    }

    printf("How much numbers of food do you want?\n");
   scanf("%d",&tokens);
   if(choice==1)
   {
      total=tokens* 5;
   }
   else if(choice==2)
   {
      total=tokens* 10;
   }
   else if(choice==3)
   {
      total=tokens* 30;
   }
   else if(choice==4)
   {
      total=tokens* 40;
   }
   else

   {
      total=tokens* 80;
   }









printf("\n**************************************");
printf("\n**************************************");

printf("\n\n     Token Detales:\n\n");
   printf("\n Food Number           :%d",choice);
   printf("\n Token Number of foods :%d",tokens);
   printf("\n Total Amoun           :%d",total);
   printf("\n\n*******************************");
   printf("\n *******************************");
   printf("\n\n THANK YOU. PLESE COME AGAIN");
   printf("\n\n ");








}



















