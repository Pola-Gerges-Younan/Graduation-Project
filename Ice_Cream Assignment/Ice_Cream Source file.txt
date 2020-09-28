#include"Ice_Cream.h"

//IN Extern we use declaring only
extern unsigned int Ice_Cream_Number;

//Function to increment the number of the ice cream in store
void Increament_Ice_Cream(int count)
{
    if (count<=0)
    {
        printf("Negative numbers are not allowed please...try again\n");
    }
    else
    {
        Ice_Cream_Number = Ice_Cream_Number + count;
    }

}



//Function to decrement the number of the ice cream in store
void Decreament_Ice_Cream(int Count)
{
    if(Count<=0)
    {
         printf("Negative numbers are not allowed please...try again\n");
    }
    else
    {
         Ice_Cream_Number = Ice_Cream_Number - Count;
    }
}
