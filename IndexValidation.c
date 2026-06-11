#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    printf("How many elements?");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements : ");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the index you want to check : ");
    int index;
    scanf("%d",&index);
    bool temp = false;
    for(int i = 0; i < n; i++){
        if(i == index){
          temp = true;
        }

    }
    if(temp == true){
        printf("The index is valid");
    }else{
        printf("The index is not valid");
    }
    return 0;
}
