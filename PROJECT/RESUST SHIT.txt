#include<stdio.h>
int main()
{

    printf("*************NAME**************\n");
     printf("******MOST ROKSANA AKTER******\n");
int e, b, m, p, c, per, total;
printf("*****************************\n");
printf("ENTER ENGLISH MARKS  :\n");
scanf("%d",&e);
printf("ENTER BANGLA MARKS   :\n");
scanf("%d",&b);
printf("ENTER MATH MARKS     :\n");
scanf("%d",&m);
printf("ENTER PHYSICS MARKS  :\n");
scanf("%d",&p);
total=e+b+m+p+c;
per=total*100/500;
printf("----------------------------\n");

printf("ENGLISH   MAX.MARK   OBTAIN MARK\n");
printf("ENGLISH    100         %d\n",e);
printf("BANGLA     100         %d\n",b);
printf("MATH       100         %d\n",m);
printf("COMPUTER   100         %d\n",c);
printf("----------------------------\n");


printf("TOTAL MARKS=%d   I PERSENTAGE=%d/n",total,per );

return 0;
}

