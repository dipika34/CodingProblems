#include <stdio.h>
int main()
{
    int n;
    printf("How many elements?");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0, temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum +=arr[i];
            temp = sum;
        }
    }
    printf("Sum of Even elements in the array: %d", temp);
    return 0;
}
