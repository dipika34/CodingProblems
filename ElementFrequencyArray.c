#include <stdio.h>

int main()
{
    char arr[] = {1,2,3,2,2,4};
  
    int count = 0;
    printf("Enter the element for its frequency");
    int item;
    scanf("%d",&item);
  
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == item )
        {
            count ++;
        }
    }
    printf(" Frequency of %d is %d",item, count);
    return 0;
}
