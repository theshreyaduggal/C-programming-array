/*Calculating average using arrays*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()

{

   int sum=0;

   float avg=0;

   int a[6];

   clrscr();

   for (int i=0; i<=5; i++)

   {

      scanf("%d",&a[i]);

      sum=sum+a[i];

   }

   avg=sum/6;

   printf("The average is: %d",avg);

   for (i=0; i<=5; i++)

   {

     if(a[i]>avg)

     {

	printf("%d, ",a[i]);

     }

   }

   getch();
}

