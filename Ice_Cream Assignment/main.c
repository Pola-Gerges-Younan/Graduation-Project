#include <stdio.h>
#include <stdlib.h>
#include"Ice_Cream.h"





//Global Variable stored in .data section in RAM
unsigned int Ice_Cream_Number=0;
char choice;


int main()
{
    unsigned int IceCreamNumberCount;
    printf("                                               Welcome in Ice-Cream store\n");

    printf("Enter How Much Ice-Cream in the store POSITIVES numbers only\n");
    scanf("%u",&Ice_Cream_Number);


    while (1)
    {
        printf("Enter 1 to Increment number of Ice-Cream in store\n");
        printf("Enter 2 to Decrement number of Ice-Cream in store\n");
        printf("Enter 3 to know how much Ice-Cream in store\n");
        printf("Enter 4 to exit the program\n");


        scanf("%d",&choice);

        switch(choice)
        {
        case 1 :
            printf("How much Ice-Cream You made?\n");
            scanf("%u",&IceCreamNumberCount);
            Increament_Ice_Cream(IceCreamNumberCount);
            break;
        case 2 :
            printf("How much Ice-Cream You sold?\n");
            scanf("%u",&IceCreamNumberCount);
            //can not sell more than the exist in store
            if (IceCreamNumberCount>Ice_Cream_Number)
            {
                printf("This operation can not completed\n");
            }
            else
            {
                Decreament_Ice_Cream(IceCreamNumberCount);
            }
            break;
        case 3 :
            printf("There is %u pieces in the store\n",Ice_Cream_Number);
            break;

        case 4 : printf("Thank You\n");
                 return ;
            break;
        default: printf("Please choose from 1 to 4 only\n");
        break;

        }
        printf("*************************************************************\n");
    }







    return 0;
}
