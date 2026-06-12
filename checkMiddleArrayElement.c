#include <stdio.h>

int main()
{
    printf("How many elements?");
    int n;
    scanf("%d", &n);
    int arr[n];
    int start = 0;
    int end = n - 1;
    int middle = 0;
    int temp = 0;
   

    printf("\nEnter the elements in the array : ");
    for (int i = start; i <= end; i++)

    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe elements in the array :\n");
    for (int i = start; i <= end; i++)
    {
        printf("%d\n", arr[i]);
    }

    temp = (start + end) / 2;
    middle = arr[temp];
    printf("Enter the element you want to find in the middle : ");
    int target;
    scanf("%d",&target);
  
if(middle==target){
    printf("Found");
}else{
    printf("Not found");
}
printf("\n");
    printf("The middle element in the array is : index = %d element =  %d", temp, middle);
    return 0;
}
