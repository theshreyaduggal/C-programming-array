/*printing array in matrix form*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()

{

   int a[100][100];

   int m,n;

   clrscr();

   printf("Enter rows");

   scanf("%d",&m);

   printf("Enter columns");

   scanf("%d",&n);


   for (int i=0; i<m; i++)

   {

      for (int j=0; j<n; j++)

      {
	scanf("%d",&a[i][j]);


      }

      printf("\n");
   }

   for (i=0; i<m; i++)

   {

      for (int j=0; j<n; j++)

      {

	printf("%d",a[i][j]);

      }

      printf("\n");
   }

   getch();
}
