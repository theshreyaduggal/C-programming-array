/*Search in 1d array*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()

{

   int a[100];

   int n,b;

   clrscr();

   printf("Give the no. of array");

   scanf("%d",&n);

   printf("Enter no. u wanna found");

   scanf("%d",&b);

   for (int i=0; i<n; i++)

   {

     scanf("%d",&a[i]);

   }

   for (i=0; i<n; i++)

   {

      if (a[i]==b)

      {

      printf("Found at %d",i+1);

      }


   }

   printf("Not found");

   getch();

 }

