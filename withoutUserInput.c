#include <stdio.h>
int main(){
    int arr[] = {1,2,3,5};
    for(int i = 0; i < 4; i++){
        printf("%d\n",arr[i]);
    }
    printf("Enter the index : ");
    int index;
    scanf("%d",&index);
    arr[index] = 6;
    for(int i  = 0; i < 4; i++){
        printf("%d\n",arr[i]);//without using the user Input
    }
    return 0;
}
