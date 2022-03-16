/*Sum of diagonal elements*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()

{

   int a[100][100];

   int m,n;

   int sum=0;

   clrscr();

   printf("enter the no. of rows");

   scanf("%d",&m);

   printf("Enter no. of columns");

   scanf("%d",&n);

   for (int i=0; i<m; i++)

   {

     for (int j=0; j<n; j++)

     {

	scanf("%d",&a[i][j]);

     }

   }


   for(i=0; i<m; i++)

   {

     sum=(sum+a[i][i]);

   }

     printf("The sum is: %d",sum);

     getch();

}