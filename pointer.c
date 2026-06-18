#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int *p = &n; // the variable stores  both the value and the memory aaddress which is called the pointer variable
    printf("The address of the variable is \n");
    printf("%d\n", p);
    printf("The  value of the variable is");
    printf("%d", *p);
    return 0;
}
