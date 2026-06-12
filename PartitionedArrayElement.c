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
    printf("\nThe first partitioned array is:\n");
    while (start <= temp) // temp is an index
    {
        printf("%d\n", arr[start]);
        start++;
    }
    printf("The second partitioned array is\n");
    start = temp+1;
    while (start <= end)
    {
        printf("%d\n", arr[start]);
        start++;
    }
    return 0;
}
