#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100] = "Dipika";
    int length = strlen(arr);
    int count = 0;
    char t = 'i';
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == t)
        {
            count ++;
        }
    }
    printf(" Frequency of i %d", count);
    return 0;
}
