#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int temp =0;
   
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            temp = 1;/*as because the numbers that are divided by i  along with n are also divisible by not only 1 and 0 but 
            also by other numbers*/
        }
    }
    if (temp == 1)
    {
        printf("not a prime number");
    }
    else{
        printf("prime number");
    }
    // if(temp == 0)
    // {
    //     printf("not a prime number");
    // }
    return 0;
}
