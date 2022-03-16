/*Sum of all elements of array*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()

{

   int a[100][100];

   int m,n;

   int sum=0;

   clrscr();

   printf("Enter rows of array");

   scanf("%d",&m);

   printf("Enter columns of array");

   scanf("%d",&n);

   for (int i=0; i<m; i++)

   {

      for (int j=0; j<n; j++)

      {

	scanf("%d",&a[i][j]);

      }

   }

   for (i=0; i<m; i++)

   {

     for (int j=0; j<n; j++)

     {

       sum=(sum+a[i][j]);

     }

   }

   printf("Sum of all elements of array is: %d",sum);

   getch();
}

