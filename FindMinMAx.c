
#include <stdio.h>

void FindMinMAx(int Array[], int size, int min, int max)
{
    max = Array[0];
    min = Array[0];
    for(int i=0;i<size;i++)
    {
        if(max<((Array[i)))
        {
            max = Array[i];
        }
        else if(min > Array[i])
        {
            min = Array[i];
        }
    }
}

int main()
{
     int Array[10] ={0};
     int min,max;
     while(1)
     {
         printf("\n enter the elements of an array\n");
         for(int i=0;i<10;i++)
         {
             scanf("%d",Array+i);
         }
         FindMinMAx(Array,10,min,max);
         printf("\n min elemt = %d\n max elememnt =%d\n",min,max);
     }

    return 0;
}
