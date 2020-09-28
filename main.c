#include <stdio.h>

int main()
{
   int arr [2][2] = {1,2,3,4};

   int (*p)[2] = arr;

   for (int i = 0 ; i < 2 ; i++)
   {
       printf("Raw number %d has numbers : ",i+1);
       for (int j= 0 ; j < 2 ; j++)
       {
           printf("%d ",p[i][j]);
       }
       printf("\n");
   }

   myFunction();

    return 0 ;
}

void myFunction()
{
    printf("Hi guys");
}
