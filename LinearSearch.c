#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("How many elements?");
    int n;
    scanf("%d", &n);
    int arr[n];
    int start = 0;
    int end = n;
    bool temp = false;

    printf("\nEnter the elements in the array : ");
    for (int i = start; i < end; i++)

    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe elements in the array :\n");
    for (int i = start; i < end; i++)
    {
        printf("%d\n", arr[i]);


    }
    printf("Enter the item to search :");
    int item;
    scanf("%d",&item);
    for(int i = start; i < end; i++){
        if(arr[i]==item){
         temp = true;
        }
    }
    if(temp == true){
        printf("Found");
    }else{
        printf("Not found");
    }

    return 0;
}
