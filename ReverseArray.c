
#include <stdio.h>

void Reverse_Array(int Array[], int size)
{
    // int Array2[size] = {0};
    int j=0,i=0;
    for(i=0,j=size-1;i<=j;i++,j--)
    {
        int Temp = Array[i];
        Array[i] = Array[j];
        Array[j] = Temp;
    }
    
}

int main()
{
    int array[5];
    while(1)
    {
        printf("enter the elements of an array\n");
        for(int i=0;i<5;i++)
            scanf("%d",array+i);
            
        Reverse_Array(array,5);
        for(int i=0;i<5;i++)
        {
            printf("%d\t",array[i]);
        }
    }

    return 0;
}
