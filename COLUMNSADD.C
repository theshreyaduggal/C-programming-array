/*Finding sum of columns*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()

{

   int a[100][100];

   int m,n;

   int sum=0;

   clrscr();

   printf("Give the no. of rows");

   scanf("%d",&m);

   printf("Give the no. of columns");

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

	sum=(sum+a[j][i]);

      }

	printf("The sum of columns is: %d \n",sum);

	sum=0;
   }

   getch();

}