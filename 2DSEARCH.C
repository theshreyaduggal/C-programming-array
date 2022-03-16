/*Search in 2d array*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()

{

   int a[100][100];

   int m,n,x,j;

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

     printf("No. u want to search");

     scanf("%d",&x);

     for (i=0; i<m; i++)

     {

       for (int j=0; j<n; j++)

       {

	if (a[i][j]==x)

	{

	  printf("Found at %d row, %d column",i+1,j+1);

	  break;

	}

       }

     }

	if (i==m && j==n)

	{
	printf("Not found");

	}

	getch();

}



























