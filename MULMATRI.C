/*Multiplying matrices in 2d array*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()

{

  int a[100][100],b[100][100],mul[100][100];

  int m,n;

  clrscr();

  printf("no. of rows of 1st matrix");

  scanf("%d",&m);

  printf("no. of columns of 1st matrix");

  scanf("%d",&n);


  for (int i=0; i<m; i++)

  {

     for (int j=0; j<n; j++)

     {
       printf("Elements of 1st");

       scanf("%d",&a[i][j]);

     }

  }

   for (i=0; i<m; i++)

   {

     for (int j=0; j<n; j++)

     {
       printf("Elements of 2nd");

       scanf("%d",&b[i][j]);

     }

   }

   for (i=0; i<m; i++)

   {

     for (int j=0; j<n; j++)

     {
	mul[i][j]=0;

	for (int k=0;k<n;k++)

	{

	mul[i][j]=(a[i][k]*b[k][j])+mul[i][j];

	}
     }

   }

   printf("\n");

   for (i=0; i<m; i++)

   {

     for (int j=0; j<n; j++)

     {

       printf("%d",mul[i][j]);

     }

       printf("\n");

   }

   getch();

}




