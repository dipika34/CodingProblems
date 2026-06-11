#include <stdio.h>
int main()
{
    int arr[100] = {10, 20, 30};
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("Enter the index:");
    int index;
    scanf("%d", &index);

    for (int i = 0; i < 3; i++)
    {
        arr[index];
    }
    printf("The second element of the array is %d", arr[index]);
    return 0;
}
