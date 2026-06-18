#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int* p  = &n;
    //it allocates not only the address of the variable but the value of the variable
    int** p1  =  &p ;
    printf("%d",p1);
    printf("%d",**p1);
    return 0;
}
