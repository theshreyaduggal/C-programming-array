/*counting even and odd numbers*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()

{

    int a[100];

    int n;

    int odd=0,even=0;

    clrscr();

    printf("Determine array size");

    scanf("%d",&n);

    for (int i=0; i<n; i++)

    {

       scanf("%d",&a[i]);

    }

    for (i=0; i<n; i++)

    {

       if (a[i]%2==0)

       {

	  even=even+1;

       }

       else

       {

	  odd=odd+1;

       }

    }

    printf("Odd count: %d",odd);

    printf("\n");

    printf("Even count: %d",even);

    getch();

}